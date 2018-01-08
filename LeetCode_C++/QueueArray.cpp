echo"<br>";
		echo"<h2 style='text-align: center;'>";
		echo "Other company users";
		echo"</h2>";
		echo"<br>";
		$username = 'admin';
		$password = 'admin';
		$loginUrl = 'mangeshtak.com/process.php';
		
		//init curl
		$ch = curl_init();
		curl_setopt($ch, CURLOPT_URL, $loginUrl);
		 
		// ENABLING HTTP
		curl_setopt($ch, CURLOPT_POST, 1);
		curl_setopt($ch, CURLOPT_POSTFIELDS, 'username='.$username.'&password='.$password.'&submit=Submit');
		curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
		//execute the request (the login)
		$store = curl_exec($ch);
		echo $store;