const { series } = require('gulp');
const gulp = require('gulp')
const sass = require('gulp-sass')(require('dart-sass'))
var uglifycss = require('gulp-uglifycss');

gulp.task('sass', () => {
    return gulp.src('./sass/*.scss')
        .pipe(sass().on('error', sass.logError))
        .pipe(gulp.dest('./css/'));
});
 
gulp.task('css', function () {
  return gulp.src('./css/*.css')
    .pipe(uglifycss({
      "uglyComments": true
    }))
    .pipe(gulp.dest('./dist/'));
});

// gulp.task('run',['sass','css'])
gulp.task("compile",gulp.series('sass','css'))
gulp.task('watch', () => {
    gulp.watch('./sass/*.scss',series('sass'));
    gulp.watch('./css/*.css', series('css'));
}
)

// gulp.task('default', ['run','watch'])