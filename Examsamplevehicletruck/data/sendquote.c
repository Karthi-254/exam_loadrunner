sendquote()
{

	lr_start_transaction("quote");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(159);

	web_submit_data("quote.php", 
		"Action=https://sampleapp.tricentis.com/101/tcpdf/pdfs/quote.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://sampleapp.tricentis.com/101/app.php", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=Make", "Value=Nissan", ENDITEM, 
		"Name=[kW]", "Value=977", ENDITEM, 
		"Name=Date of Manufacture", "Value=02/05/2025", ENDITEM, 
		"Name=Number of Seats", "Value=3", ENDITEM, 
		"Name=Fuel Type", "Value=Diesel", ENDITEM, 
		"Name=Payload", "Value=300", ENDITEM, 
		"Name=Total Weight", "Value=5000", ENDITEM, 
		"Name=List Price", "Value=70000", ENDITEM, 
		"Name=License Plate Number", "Value=", ENDITEM, 
		"Name=Annual Mileage", "Value=400", ENDITEM, 
		"Name=First Name", "Value=karthika", ENDITEM, 
		"Name=Last Name", "Value=vel", ENDITEM, 
		"Name=Date of Birth", "Value=03/12/2004", ENDITEM, 
		"Name=Gender", "Value=Female", ENDITEM, 
		"Name=Street Address", "Value=kulathor", ENDITEM, 
		"Name=Country", "Value=India", ENDITEM, 
		"Name=Zip Code", "Value=8796786", ENDITEM, 
		"Name=City", "Value=trivandrum", ENDITEM, 
		"Name=Occupation", "Value=Employee", ENDITEM, 
		"Name=Hobbies", "Value=Speeding", ENDITEM, 
		"Name=Website", "Value=", ENDITEM, 
		"Name=Picture", "Value=", ENDITEM, 
		"Name=Start Date", "Value=03/13/2028", ENDITEM, 
		"Name=Insurance Sum", "Value=10000000", ENDITEM, 
		"Name=Damage Insurance", "Value=Full Coverage", ENDITEM, 
		"Name=Optional Products[]", "Value=Yes", ENDITEM, 
		"Name=Price Sum", "Value=1,554.00", ENDITEM, 
		"Name=Select Option", "Value=Platinum", ENDITEM, 
		"Name=Quote Type", "Value=S", ENDITEM, 
		"Name=E-Mail", "Value=karthika.v@gmail.com", ENDITEM, 
		"Name=Phone", "Value=45667778976", ENDITEM, 
		"Name=Username", "Value=karthika", ENDITEM, 
		"Name=Password", "Value=Karthi@254", ENDITEM, 
		"Name=Confirm Password", "Value=Karthi@254", ENDITEM, 
		"Name=Comments", "Value=", ENDITEM, 
		LAST);

	lr_end_transaction("quote",LR_AUTO);

	return 0;
}