

var btn = document.getElementById("submitButton")

function buttonClicked() {
    // const walking = 6;
    // const skipping = 10;
    // const exercise = 8;
    var result;
    var MET;
    var exerciseType = document.getElementById("exerciseType").value;
    if (exerciseType == "JogWalking"){
        MET = 6;
    }
    else if (exerciseType == "briskWalking"){
        MET = 5;
    }
    else if (exerciseType == "slowWalking"){
        MET = 3.5;
    }
    else if (exerciseType == "skipping"){
        MET = 10;
    }
    else if (exerciseType == "exercise"){
        MET = 8;
    }
    else if (exerciseType == "sleep"){
        MET = 0.9;
    }
    var duration = document.getElementById("duration").value;
    var weight = document.getElementById("weight").value;

    result = duration * (MET * 3.5 * weight) / 200;

    var resultdiv = document.getElementById("result");
    resultdiv.innerHTML = "You burned <b>" + result + "</b> calories";
}
btn.addEventListener("click" , buttonClicked);

