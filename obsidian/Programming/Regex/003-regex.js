let string1 = "I will hum a song"
let string2 = "I will hug a panda"

let regex = /hu./
console.log(regex.test(string1));
console.log(regex.test(string2));


console.log(string1.match(regex));
console.log(string2.match(regex));

// hu. - starts with hu
// .ug - ends with ug
