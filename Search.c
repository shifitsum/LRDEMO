
Search()
{

lr_message(".. Executing Search Action...");
		
lr_start_transaction("01_pageLaunch");	

web_custom_request("web_custom_request",
"URL=www.example.com",
"Method=GET",
"TargetFrame=",
"Resource=0",
"Referer=",
"Body=",
LAST);

lr_end_transaction("01_pageLaunch", LR_AUTO);


	return 0;
}
