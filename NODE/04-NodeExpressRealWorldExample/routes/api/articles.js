var router = require("express").Router();
var mongoose = require("mongoose");
var Article = mongoose.model("Article");
var Comment = mongoose.model("Comment");
var User = mongoose.model("User");
var auth = require("../auth");

// preload article objects on routes with ':article'
router.param("article", function (req, res, next, slug) {
  Article.findOne({ slug: slug })
    .populate("author")
    .then(function (article) {
      if (!article) {
        return res.sendStatus(404);
      }

      req.article = article;

      return next();
    })
    .catch(next);
});

router.param("comment", function (req, res, next, id) {
  Comment.findById(id)
    .then(function (comment) {
      if (!comment) {
        return res.sendStatus(404);
      }

      req.comment = comment;

      return next();
    })
    .catch(next);
});

router.get("/", auth.optional, function (req, res, next) {
  var query = {};
  var limit = 20;
  var offset = 0;

  if (typeof req.query.limit !== "undefined") {
    limit = req.query.limit;
  }

  if (typeof req.query.offset !=="undefined"){
      offset = req.query.offset
  }

  if (typeof req.query.tag !=="undefined"){
      query.tagList = {$in:[req.query.tag]}
  }

  Promise.all([
    req.query.author?User.findOne({username:req.query.author}):null;
    req.query.faviorited
    ? User.findOne({username:req.query.faviorited})
    :null,
  ]).then
});
