const a=document.getElementById("Input");
function check(){
    const b=a.value
    const c=reversestring(b);
    if (b==c){
        alert("palindrome")
    }else{
        alert("not a palindrome")
    }
}

function reversestring(str){
    //can also use,return str.split().reverse().join("")
    //split()-split the str into a array of elements(letters)
    //.reverse()-reverse all the elements in the array
    //.join("")-combine all the elements to a string 
    var a='';
    const b=str.length;
    for (let i=0;i<b;i++){
        var c=str[b-i-1];
        a+=c;
    }
    return a;
}