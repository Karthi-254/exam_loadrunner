priceoption()
{

	lr_start_transaction("price");

	lr_end_transaction("price",LR_AUTO);

	return 0;
}
