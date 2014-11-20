var key; // Global variable.

// Since the key is generated when the page
// is loaded, no one will be able to steal it
// by looking at the source! This must be secure!
function generateKey() {
	var i = 1;
	var x = 289;
	var n = 5493;
	while (i <= 25) {
		x = (x * i) % n;
		i++;
	}
	key = "flag_" + Math.abs(x);
}

generateKey();

// Encode the message using the 'key'
function encode() {
	var input = $("#inputmessage").val();
	var output = CryptoJS.AES.encrypt(input, key);
	$("#outputmessage").val(output);
}
