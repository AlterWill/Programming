const input = require("prompt-sync")();
let numOne=1;
let numSecond=1;
while(true){
    let b=input("Enter the first number:")
    numOne = parseFloat(b)
    if(isNaN(numOne)){ 
        console.log("Invalid input.Please enter the correct input");
    }else{
        break;
    }
}
while (true) {
    numSecond = parseFloat(input("Enter the second number: "));
    if (!isNaN(numSecond)) break; 
    console.log("Invalid input. Please enter a number.");
}
console.log("\n1-add\n2-subtract\n3-multiply\n4-divide\n");
const operation=input("Enter the operation:")
let a;
let valid=true;
switch (operation){
    case '1':
        a=numOne+numSecond;
        break;
    case '2':
        a=numOne-numSecond;
        break;
    case '3':
        a=numOne*numSecond;
        break;
    case '4':
        if(numSecond!==0){
            a=numOne/numSecond;
        }else{
            console.log("Division by zero");
            valid=false;
        }
        break;
    default:
        console.log("Invalid input...");
        
        break;
}
if (valid===true){
    console.log(a)
}