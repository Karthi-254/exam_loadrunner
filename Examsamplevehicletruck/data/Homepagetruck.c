Homepagetruck()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_sockets_option("TLS_SNI", "0");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("101", 
		"URL=https://sampleapp.tricentis.com/101/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	lr_start_transaction("home");

	web_reg_find("Text=Make", 
		LAST);

	lr_think_time(9);

	web_url("app.php", 
		"URL=https://sampleapp.tricentis.com/101/app.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sampleapp.tricentis.com/101/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("home",LR_AUTO);

	return 0;
}
