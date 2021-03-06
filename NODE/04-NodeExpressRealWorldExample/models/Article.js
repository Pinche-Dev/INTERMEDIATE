var mongoose = require("mongoose");
var uniqueValidator = require("mongoose-unique-validator");
var slug = require("slug");
var User = mongoose.model("User");

var ArticleSchema = new mongoose.Schema(
  {
    slug: { type: String, lowercase: true, unique: true },
    title: String,
    description: String,
    body: String,
    favioratesCount: { type: Number, default: 0 },
    comments: [{ type: mongoose.Schema.Types.ObjectId, ref: "Comment" }],
    tagList: [{ type: String }],
    author: { type: mongoose.Schema.Types.ObjectId, ref: "User" },
  },
  { timestamps: true }
);

ArticleSchema.plugin(uniqueValidator, { message: "is already taken" });

ArticleSchema.pre("validate", function (next) {
  if (!this.slug) {
    this.slugify();
  }
  next();
});

ArticleSchema.methods.slugify = function(){
    this.slug = slug(this.title)+'-'+(Math.random()*Math.pow(36,6)|0).toString(36);
}

ArticleSchema.methods.updateFavioratesCount = function(){
    var article = this
    return User.count({faviorate:{$in:[article.id]}}).then(function(count){
        article.favioratesCount = count;
        return article.save()
    })
}

ArticleSchema.methods.toJSONfor = (user)=>{
    return {
        slug:this.slug,
        title:this.title,
        description:this.description,
        body:this.body,
        createdAt:this.createdAt,
        updatedAt:this.updatedAt,
        tagList:this.tagList,
        faviorated:user?user.isFaviorate(this._id):false,
        favioratesCount:this.favioratesCount,
        author:this.author.toProfileJSONFor(user)
    }
}

mongoose.model('Article',ArticleSchema);