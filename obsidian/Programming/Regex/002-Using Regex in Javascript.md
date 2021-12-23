used in programming language to match part of the strings

```JS
let sentence = "The dog chased the cat"
let regex = /the/

let myString = "Hello, World!"
let myRegex = /Hello/
let result = myRegex.test(myString)
```

## Match Literal String

```JS
let WaldoIsHiding = "Somewhere in the jungle Waldo is hiding."
let regex1 = /Waldo/
let regex2 = /waldo/

let result1 = regex1.test(WaldoIsHiding) //this is true
let result2 = regex2.test(WaldoIsHiding) //this is false
```

## Match a string with different possibilities

```JS
let sentence = "I have a pet Dog";
let regex = /Dog|Fish|Bird/;

//what this is going to do is match if any is present
let result = regex.test(sentence) //this is going to return true
```

# You can use flags 

## Ignore case while Matching
```JS
let myString = "freeCodeCamp"
let regex = /freecodecamp/i
// i  - ignores the case
let result = regex.test(myString); //this return true
```

## find more than the first match
```JS
let testStr = "Repeat, Repeat, Repeat"
let ourRegex = /Repeat/g;
// g - is going to return every single occournace
testStr.match(ourRegex);
```

## finding more than the first match and case different

```JS
let string = "Twinkle, twinkle little star!"
let regex = /Twinkle/ig
// i - ignore case | g- find more than one occurnace
string.match(regex);
```
