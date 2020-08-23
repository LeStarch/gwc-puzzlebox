/**
 * Lesson 1:
 *
 *
 */
function submit1() {
    document.getElementById("errordiv").setAttribute("hidden", "");
    document.getElementById("num1").innerHTML = "";
    let elem = document.getElementById("input1");
    let errd = document.getElementById("errordiv");
    let errs = document.getElementById("errorbox");
    let value = elem.value;

    let valuep = parseInt(value);
    if (value != "" && isNaN(valuep)) {
        errd.removeAttribute("hidden")
        errs.innerHTML = "" + value + " is not a number."
    } else if (value != "") {
        document.getElementById("num1").innerHTML += valuep;
    }
    if (elem.value.indexOf("<img") != -1) {
        document.getElementById("extra").innerHTML += "Press 'Next' again to reveal an explanation."
    }
}

function next1() {
    document.getElementById('next1').removeAttribute('hidden');
    let elem = document.getElementById("input1");
    if (elem.value.indexOf("<img") != -1) {
        document.getElementById('next2').removeAttribute('hidden');
    }
}