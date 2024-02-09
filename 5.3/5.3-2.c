#include<stdio.h>
#define p printf
#define s scanf
main(){
	int n;
	p("Press 1 for English\n");
	p("Press 2 for Hindi\n");
	p("Press 3 for Gujarati\n");
	p("enter your choice : ");
	s("%d",&n);
	switch(n){
	
		case 1:
			p("\n\nPress 1 for Internet Recharge\n");
			p("Press 2 for Top-up Recharge\n");
			p("Press 3 for Special Recharge\n");
			p("enter your choice :");
			s("%d",&n);
				switch(n){

					case 1:
						p("\n\nYou have successfully done Internet Recharge.");
						break;
					case 2:
						p("\n\nYou have successfully done Top-up Recharge.");
						break;
					case 3:
						p("\n\nYou have successfully done Special Recharge.");
						break;
				}
			break;
		case 2:
			p("\n\nInternet Recharge ke liye 1 dabaiye\n");
			p("Top-up Recharge ke liye 2 dabaiye\n");
			p("Special Recharge ke liye 3 dabaiye\n");
			p("enter your choice : ");
			s("%d",&n);
				switch(n){

					case 1:
						p("\n\nAapne safaltapurvak Internet Recharge kar liya he.");
						break;
					case 2:
						p("\n\nAapne safaltapurvak Top-up Recharge kar liya he.");
						break;
					case 3:
						p("\n\nAapne safaltapurvak Special Recharge kar liya he.");
						break;
				}
			break;
		case 3:
			p("\n\nInternet Recharge mate 1 dabavo\n");
			p("Top-up Recharge mate 2 dabavo\n");
			p("Special Recharge mate 3 dabavo\n");
			p("enter your choice : ");
			s("%d",&n);
				switch(n){

					case 1:
						p("\n\nTame safaltapurvak Internet Recharge karyu chhe.");
						break;
					case 2:
						p("\n\nTame safaltapurvak Top-up Recharge karyu chhe.");
						break;
					case 3:
						p("\n\nTame safaltapurvak Special Recharge karyu chhe.");
						break;
				}
			break;
		
		default:
			p("invalid input");
	}
}
