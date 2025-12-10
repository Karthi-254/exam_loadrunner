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

/*Correlation comment - Do not change!  Original value='Employee' Name ='Occupation' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=Occupation",
		"RegExp=option\\ value=\"(.*?)\">Employee",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/app.php*",
		LAST);

/*Correlation comment - Do not change!  Original value='Speeding' Name ='Hobbies' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=Hobbies",
		"TagName=input",
		"Extract=value",
		"Name=Hobbies",
		"Id=speeding",
		"Type=checkbox",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		"RequestUrl=*/app.php*",
		LAST);

/*Correlation comment - Do not change!  Original value='70000' Name ='CorrelationParameter' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter",
		"RegExp=option\\ value=\"(.*?)00",
		"Ordinal=3",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/app.php*",
		LAST);

/*Correlation comment - Do not change!  Original value='10000000' Name ='CorrelationParameter_1' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_1",
		"RegExp=option\\ value=\"(.*?)\">\\ 10\\.000\\.000,00",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/app.php*",
		LAST);

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
