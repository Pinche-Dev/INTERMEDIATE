const gulp = require('gulp');
const sass = require('gulp-sass')(require('dart-sass'));
const uglify = require('gulp-uglifycss');


gulp.task('sass',()=>{
    return gulp.src('./sass/*.scss')
    .pipe(sass())
    .pipe(gulp.dest('./css'));
})

gulp.task('css',()=>{
    return gulp.src('./css/*.css')
    .pipe(uglify())
    .pipe(gulp.dest('./dist'));
})

gulp.task('run',gulp.series('sass','css'));
gulp.task('watch',()=>{
    gulp.watch('./sass/*.scss',gulp.series('sass'))
    gulp.watch('./css/*.css',gulp.series('css'))
})
