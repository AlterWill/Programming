const time=document.getElementById('time');
let sec_passed=0;
let min_passed=0;
let interval =0;
let min_display=0;
let sec_display='';
let hour_passed=0;
let hour_display='';
let on='n';

function padstart(value){
    return String(value).padStart(2,'0');
}

function display(){
    hour_display=padstart(hour_passed);
    min_display=padstart(min_passed);
    sec_display=padstart(sec_passed);
    time.innerHTML=`${hour_display}:${min_display}:${sec_display}`;
}

function counter(){
    if(on=='y'){
        sec_passed++;
        if(sec_passed%60==0 && sec_passed!=0){
            sec_passed=0;
            min_passed++;
        }
        if(min_passed%60==0 && min_passed!=0){
            min_passed=0;
            hour_passed++;
        }
        display();        
    }
    
}

function startclock(){
    if(on=='n'){
        interval = setInterval(counter,1000);
        on='y';
    }
}
function stopclock(){
    on='n';
}
function resetclock(){
    sec_passed=0;
    min_passed=0;
    interval =0;
    min_display='';
    sec_display='';
    hour_passed=0;
    hour_display=0;
    on='n';
    display();
}