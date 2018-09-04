/**
 * Runs action on form attachment.
 */

var userdict = [ 
    {'name':'abc', 'passwd':'abc'},
    {'name':'blacky', 'passwd':'blacky'},
    {'name':'reddy', 'passwd':'reddy'},
    {'name':'selina', 'passwd':'abc123'}
];

function valid_user(username) {
    for (var i = 0; i < userdict.length; i++) {
        if (userdict[i].name == username) {
            return true;
        }
    }
    return false; 
}

function valid_pass(username,passwd) {
    for (var i = 0; i < userdict.length; i++) {
        if (userdict[i].name == username) {
            if (userdict[i].passwd == passwd) {
                return true;
            }
        }
    }
    return false; 
}

function on_action(evnt) {
    var form = document.getElementById('userform_id');
    var user = document.getElementById('user').value;
    var pass = document.getElementById('pass').value;

    var regex = /^[a-zA-Z\-]+$/;
    var check_name = document.getElementById('user').value.match(regex);
    if (check_name == null) {
    	form.reset();
        document.getElementById("error").innerHTML = "<br><br><center><font color='blue'>Username is invalid. Only characters A-Z, a-z are accepted</font></center>";
    }
    else {
        if (valid_user(user)) {
	    if (valid_pass(user,pass)) {
	        document.getElementById("content").innerHTML = "<h1>Hello " + user + "! Welcome to our system!</h1>\nOur system is great!";
		document.getElementById("error").innerHTML = "";
	    }
	    else {
	        form.reset();
	    	document.getElementById("error").innerHTML = "<br><br><center><font color='red'>Incorrect password!</font></center>";
	    }
	}
	else {
	    form.reset();
	    document.getElementById("error").innerHTML = "<br><br><center><font color='red'>User ("+user+") does not exist</font></center>";

	}
    }
}
