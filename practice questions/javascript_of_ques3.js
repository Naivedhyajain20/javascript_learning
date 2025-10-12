// SOLUTION 1 ---->
// var form = document.querySelector("form")
// var inp1 = document.querySelector("#inp1")
// var inp2 = document.querySelector("#inp2")
// var h4 = document.querySelector("h4")

// form.addEventListener("submit" , function(ev){
//     ev.preventDefault();
// if(inp1.value === '' || inp2.value === ''){
//     h4.textContent = "ERROR...Kuch to daal ";
//     h4.style.color = "red";
// }
// else{
//         h4.textContent = '' ;
//         h4.style.color = "black";
// }
// })



// SOLUTION 2 ----> thoda complecatedd hai but bina error ke chalta hai


var form = document.querySelector("form")
var inps = document.querySelectorAll("input[type='text']");
var h4 = document.querySelector("h4")

form.addEventListener("submit", function(ev) {
    ev.preventDefault();
    // Check if any input is empty
    const hasEmpty = Array.from(inps).some(function(elem) {
        return elem.value.trim() === '';
    });
    if (hasEmpty) {
        h4.textContent = "ERROR...Kuch to daal ";
        h4.style.color = "red";
    } else {
        h4.textContent = '';
        h4.style.color = "black";
    }
});