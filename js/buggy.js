/**
 * Submit the username and password and respond to wheither or not it is correct
 */
function submit()
{
    var WAITING = 0;
    var STOP = false;
    var username = document.getElementById("username").value;
    var password = document.getElementById("password").value;
    document.getElementById("messages").innerHTML = "<br />";
    /**
     * Callback for result of checking of password
     */
    function checkCallback(right)
    {
        STOP = true;
        //If correct, do the following
        if (right)
        {
            login(username);
            return;
        }
        document.getElementById("messages").innerHTML = "We are sorry, but the username \""+username+"\" and the password \""+password+"\" do not reprsent a valid combination."    
    }
    check(username,password,checkCallback);
    /**
     * A function to show a "waiting" message while checking the password
     */
    function waiting()
    {
        if (!STOP)
        {
            document.getElementById("messages").innerHTML = "Checking "+".".repeat(WAITING);
            WAITING = WAITING + 1;
        }
    }
    waiting();
    setInterval(waiting,450);
}
