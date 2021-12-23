let string1 = "Hello world";
let regex1 = /Hellos/

let result1 = regex1.test(string1);
console.log(result1);

// searching for multiple multiple cases
let string02 = "I have a pet Dog";
let regex02 = /Dog|Cat|Fish/;
// console.log(string02.test(regex02))
console.log(regex02.test(string02));

// ignoring the cases i.e. return both capital or small lettered words
let string2 = " Twinkle little star!"
let regex2 = /twinkle/i

// console.log(string2.match(regex2));
console.log(regex2.test(string2));

// finding more than first match

let string3 = " I am so so good at programming";
let regex3 = /so/g;

console.log(string3.match(regex3));

// finding more than first match and ignoring the case

let string4 = " Twinkle, twinkle little star!";
let regex4 = /twinkle/ig;

console.log(string4.match(regex4));
