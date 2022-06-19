const { application } = require('express');

var http = require('http'),
path = requre('path'),
methods = require('methods'),
express=require('express'),
bodyParser = require('body-parser'),
session = require('express-session'),
cors = require('cors'),
passport =require('passport'),
errorhandler = require('errorhandler'),
mongoose = require('mongoose')

var isProduction = process.env.NODE_ENV === 'production'

var app = express();
app.use(cors());
app.use(require('morgan')('dev'))
app.use(bodyParser.urlencoded({extended:false}));
app.use(bodyParser.json())


app.use(require('method-overide')())
app.use(express.static(__dirname+'/public'))

app.use(session({secret:'conduit',cookie:{maxAge:60000},resave:false,saveUninitialized:false}))

if (!isProduction){
    app.use(errorhandler());
}

if (!isProduction){
    mongoose.connect(process.env.MONGODB_URI)
}else{
    mongoose.connect('mongodb://localhost/conduit')
    mongoose.set('debug',true)
}

require('./models/User.js');
require('./models/Article.js')
require('./models/Comment.js')
require('./config/passport')

app.use(require('./routes'))

app.use(function(req,res,next){
    var err = new Error('Not Found')
    err.status = 404;
    next(err)
})

if (!isProduction){
    app.use(function(err,req,res,next){
        console.log(err.stack)
        res.status(err.status||500)
        res.json({'errors':{
            message:err.message,
            error:err
        }})
    })
}

app.use(function(err,req,res,next){
    res.status(err.status||500)
    res.json({'errors':{
        message:err.message,
        error:{}
    }})
})

var server = app.listen(process.env.PORT||3000,function(){
    console.log('listening on port '+server.address().port)
})