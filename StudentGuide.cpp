#include<iostream>
#include<cstring>
using namespace std;

//global variables
int teacher_count = 0, vc_count = 0, dean_count = 0, noffice_count= 0, foffice_count= 0, Max_sports = 0, Max_Cafe = 0, Max_parking = 0, Max_Masjid= 0,appointment_count = 0, not_count = 0;
	int NBRooms = 0;
	int OBRooms = 0;
//Room class
class Room
{
	public:
		int room_number;
		string description,building;		
};

class office: public Room {
	// this is office class
};
//university class
class University{
	private:
		string name, description, location, contact;
	public:
		University(string n, string d, string l, string c)
		{
			name = n;
			description = d;
			location = l;
			contact = c;
		}
		void University_Details()
		{
			cout<<"\nName: "<<name;
			cout<<"\nDescripiton: "<<description;
			cout<<"\nLocation : "<<location;
			cout<<"\nContact: "<<contact;
		}
};


//VC class
class VC: public Room{
	public:
		string VCname,VCdescription,VCmeeting_time;
	
		
};


//Dean class
class Dean : public Room{
	public:
		string Deanname,Dean_description,Dean_meeting_time;
		
};

//Teachers Class
class teacher : public Room {
	public:
		string teacher_name, teacher_description, Teacher_meeting_time;	
		
};


//function for displaying login page
void login()
{
	cout<<"\n\t|---Welcome---|";
	cout<<"\nChoose Login: ";
	cout<<"\n[1] Student\t[2] Admin\t[3] University Details";
}

//function for displaying interface for students
void student_interface()
{
	cout << "\n\t\t|---------------------------------------------------------|";
	cout << "\n\t\t|---------------------------------------------------------|";
	cout << "\n\t\t|------------------------- LGU ---------------------------|";
	cout << "\n\t\t|---------------------------------------------------------|";
	cout << "\n\t\t|---------------------------------------------------------|";
	cout << "\n\nPlease Select one option: [0] logout";
	cout << "\n[1] Rooms\t[2] VC\n[3] Deans\t[4] Teachers\n[5] Offices\t[6] Sports Complex\n[7] Parking\t[8] Cafeteria\n[9] Masjid\t[10] Notification\n[11] Appointment";

}

//function for displaying interface for Admin
void Admin_interface()
{
	cout << "\n\t\t|---------------------------------------------------------|";
	cout << "\n\t\t|---------------------------------------------------------|";
	cout << "\n\t\t|------------------------- LGU ---------------------------|";
	cout << "\n\t\t|---------------------------------------------------------|";
	cout << "\n\t\t|---------------------------------------------------------|";
	cout << "\n\nPlease Select one option: [0] Logout";
	cout << "\n[1] Add Rooms\t[2] Add VC\n[3] Add Deans\t[4] Add Teachers\n[5] Add Offices\t[6] Add Sports Complex\n[7] Add Parking\t[8] Add Cafeteria\n[9] Add Masjid\t[10] Add Notification\n[11] Check Appointment\t[12] Reset Pass";

}

int goto_menu()
{
	int op;
	cout<<"\nGo back to menu: [1] Yes   [2] No: ";
	cin>>op;
	return op;
}

//function for logging in
int option()
{
	int a;
cout<<"\nEnter: ";
cin>>a;
return a;
}

//Class for login variables and methods or constructors
class Login{
	private:
		int pass;
		string username;
	public:
	Login()
	{
		pass = 1234;
		username = "Admin";		
	}
	void updatePassword()
		{
			int temp_pass,con_pass;
			cout<<"\nEnter your Current Password: ";
			cin>>temp_pass;
			if(temp_pass == pass)
			{
				cout<<"\nEnter Your new Password: ";
				cin>>pass;
				con_password:
				cout<<"\nConfirm New Password: ";
				cin>>con_pass;
				if(pass == con_pass)
				{
					cout<<"\nPassword Updated!";
					pass = con_pass;
					
				} else {
					system("cls");
					cout<<"\nPassword Don't Match! Enter Again: ";
					goto con_password;
				}
			} else  
			{
				cout<<"\nIncorrect Password!";
			}
		}
		int getpass()
		{
			return pass;
		}
		string getname()
		{
			return username;
		}
};

//class for Masjid, cafeteria, sports complex and parking
class Extras{
	public:
	string E_Name, location;
	
};

//class for notifications
class notification{
	public:
		string notification_subject, notification_message, notification_date, notification_time;
};

class appointment {
	public:
		string name, author_name, message;
		void Book_Appointment()
		{
			cout<<"\nEnter Your name (Applicant): ";
			cin.ignore();
			getline(cin, name);
			cout<<"\nEnter the name of reciever: ";
			cin.ignore();
			getline(cin, author_name);
			cout<<"\nYour message: ";
			cin.ignore();
			getline(cin, message);
			
			cout<<"\nYour Application is Under-Review. Thank You!";
		}
		void DisplayAppointments()
		{
			cout<<"\nApplicant: "<<name;
			cout<<"\nReciever: " << author_name;
			cout<<"\nMessage: "<< message; 
		}
};


int main()
{
	//Objects of classes
		University Uni("Lahore Garrison University", "ABC", "DHA Phase VI, Lahore", "+ 92 312 345 6789");
	Room R[150];   	//new building									 
	Room O[150];   //old building 
	VC vc[100];
	Dean dean[100];
	teacher teach[100];
	Extras Masjid[5];
	Extras Sports[5];
	Extras Cafe[5];
	Extras Parking[5];
	office NF[150];
	office OF[150];
	appointment a[50];
	Login l;
	//object of class notification
	notification n[100]; 
	
		 // Sample Data
    // New Building and Old building Samples
    for (int i = 0; i < 15; i++)
    {
        // New Building
        R[i].room_number = i + 1;
        R[i].building = "NB";
        R[i].description = "New Building Ground Floor/ Basement.";

        // New Building office
        NF[i].room_number = i + 1;
        NF[i].building = "NB";
        NF[i].description = "New Building Second Floor.";

        // Old Building
        O[i].room_number = i + 1;
        O[i].building = "OB";
        O[i].description = "Old Building Block A 1st Floor.";

        // Old Building Offices
        OF[i].room_number = i + 1;
        OF[i].building = "OB";
        OF[i].description = "Old Building Block C, 3rd Floor.";
         noffice_count++;
         NBRooms++;
    }

    // Sample VC
    vc[0].VCname = "Major General Shahzad Sikander, HI(M) (RETD)";
    vc[0].VCdescription = "Vice Chancellor of Lahore Garrison University";
    vc[0].VCmeeting_time = "1:00 PM to 3:00 PM";
    vc[0].room_number = 1;
    vc[0].description = "Old Building, Block C, 2nd Floor";

    // Sample Dean
    dean[0].Deanname = "Dr. Muhammad Asif";
    dean[0].Dean_description = "Dean CS/Associate Professor, Lahore Garrison University";
    dean[0].Dean_meeting_time = "11:00 PM to 3:00 PM";
    dean[0].room_number = 57;
    dean[0].description = "New Building 3rd Floor, Faculty of Computer Sciences";

    // Sample Teachers
    teach[0].teacher_name = "Mr. Munawar Ahmad";
    teach[0].teacher_description = "Lecturer, Department of Computer Sciences, Lahore Garrison University";
    teach[0].Teacher_meeting_time = "Check TimeTable (Student Portal) for meeting time";
    teach[0].room_number = 80;
    teach[0].description = "Ground floor, Server Room, Desk 03";

    teach[1].teacher_name = "Mr. Mughees Asif";
    teach[1].teacher_description = "Lecturer, Department of Computer Sciences, Lahore Garrison University";
    teach[1].Teacher_meeting_time = "Check TimeTable (Student Portal) for meeting time";
    teach[1].room_number = 63;
    teach[1].description = "2nd floor, XYZ, XYZ";

    teach[2].teacher_name = "Mr. Adeel Ahmad";
    teach[2].teacher_description = "Lecturer, Department of Computer Sciences, Lahore Garrison University";
    teach[2].Teacher_meeting_time = "Check TimeTable (Student Portal) for meeting time";
    teach[2].room_number = 12;
    teach[2].description = "New building, Ground floor, Room 12";

    // Sample Extras
    Masjid[0].E_Name = "Masjid";
    Masjid[0].location = "Masjid, a place for prayer and worship.";

    Sports[0].E_Name = "Sports Complex";
    Sports[0].location = "Sports Complex for indoor and outdoor activities.";

    Cafe[0].E_Name = "Cafeteria";
    Cafe[0].location = "Cafeteria for refreshments and snacks.";
  
    Parking[0].E_Name = "Parking Area";
    Parking[0].location = "Parking Area for vehicles.";
    

    // Sample Notifications
    n[0].notification_subject = "Exam Schedule";
    n[0].notification_message = "The final exam schedule for the current semester has been announced. Please check the student portal for details.";
    n[0].notification_date = "2023-06-30";
    n[0].notification_time = "10:00 AM";

    n[1].notification_subject = "Seminar Announcement";
    n[1].notification_message = "A seminar on 'Artificial Intelligence' will be held on July 10th, 2023 in the auditorium. All students are invited to attend.";
    n[1].notification_date = "2023-06-29";
    n[1].notification_time = "2:00 PM";

	Max_sports = 1, Max_Cafe = 1, Max_parking = 1, Max_Masjid= 1, not_count +=2;
	
		teacher_count+=4;
		vc_count++;		
		dean_count++;
	
	//Some variables
	int total = 100, count = 0, op,password;
	string name,choice,desc,time;
	login:  //label for login
	system("cls");
	login();
	op = option();
	//if else for choosing login
	if (op == 1)
	{
		Student_Menu:
		system("cls");
		student_interface();
		op = option();
		
		switch (op)
		{
			case 1:				//If student wants to find and see all rooms
			{
				system("cls");
				cout<<"\nChoose: \n[1] Find Room\t[2] All Rooms";		//Asking them to choose any option  
				op = option(); 
				if (op == 1)
				{
					system("cls");
					cout<<"\nPlease enter building name: ";
					cin>>choice;											//find room body
					cout<<"\nPlease enter room number: ";
					op = option();
					for(int i = 0; i<100; i++)
					{
					
						if (choice == R[i].building ||choice  == "nb" && op == R[i].room_number)
						{
							system("cls");
							cout<<"\nRoom : "<<R[i].room_number;
							cout<<"\nBuilding : "<<R[i].building;
							cout<<"\nDescription : "<<R[i].description;
							break;
							
						} else if (choice == O[i].building || choice == "ob" && op == O[i].room_number)
						{
							system("cls");
							cout<<"\nRoom : "<<O[i].room_number;
							cout<<"\nBuilding : "<<O[i].building;
							cout<<"\nDescription : "<<O[i].description;
							break;
						} else { 
						
						cout<<"\nInvalid Room or Building"; }
					}
					
				} else if (op == 2 )
				{
					system("cls");
					cout<<"\nPlease enter building name: ";
					cin>>choice;
					for(int i = 0; i<NBRooms; i++)
					{
					
						if (choice == R[i].building || choice == "nb")     
						{
							
							cout<<"\n";
							cout<<"\nRoom : "<<R[i].room_number;
							cout<<"\nBuilding : "<<R[i].building;
							cout<<"\nDescription : "<<R[i].description;
							
						}
						else if (choice == O[i].building || choice == "ob")     
						{
							
							cout<<"\n";
							cout<<"\nRoom : "<<O[i].room_number;
							cout<<"\nBuilding : "<<O[i].building;
							cout<<"\nDescription : "<<O[i].description;
							
						} else {
							cout<<"\nNo such building found!";
							break;
						}
					}	
							//print all rooms body;
					
				} else 
				{
					system("cls");
					cout<<"\nInvalid Option";
				}
			op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Student_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}		
				break;
			}
				case 2:
				{	
					system("cls");
					cout<<"\nVCs: ";
					for (int i = 0; i<vc_count; i++)
					{
						
						cout<<"\nVC's Name: "<< vc[i].VCname;
						cout<<"\nVC's Description: "<<vc[i].VCdescription;
						cout<<"\nVC's Meeting time: "<<vc[i].VCmeeting_time;
						cout<<"\nVC's Room : "<<vc[i].room_number;
						cout<<"\nRoom's Description: "<<vc[i].description;
					}
					op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Student_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}		
					break;
				}
					case 3:
					{
						system("cls");
						
					cout<<"\nDeans: ";
					for (int i = 0; i<dean_count; i++)
					{
					
						cout<<"\nDean's Name: "<<dean[i].Deanname;
						cin.ignore();
						cout<<"\nDean's Description: "<<dean[i].Dean_description;
						cout<<"\nDean's Meeting time: "<<dean[i].Dean_meeting_time;
						cout<<"\nDean's Room: "<<dean[i].room_number;
						cout<<"\nRoom's Description: "<<dean[i].description;
					}op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Student_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
						break;
					}
						case 4:
						{	
						system("cls");
					cout<<"\nTeachers: ";
					for (int i = 0; i<3; i++)
					{
						cout<<"\n\nTeacher's Name: "<< teach[i].teacher_name;
						cout<<"\nTeacher's Description: "<<teach[i].teacher_description;
						cout<<"\nTeacher's Meeting time: "<<teach[i].Teacher_meeting_time;
						cout<<"\nTeacher's Room: "<<teach[i].room_number;
						cout<<"\nRoom's Description: "<<teach[i].description;
				    }   op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Student_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
							break;
						}
							case 5:
							{	system("cls");
				cout<<"\nChoose: \n[1] Find Office\t[2] All Offices";		//Asking them to choose any option  
				op = option(); 
				if (op == 1)
				{
					system("cls");
					cout<<"\nPlease enter building name: ";
					cin>>choice;											//find room body
					cout<<"\nPlease enter room number: ";
					op = option();
					for(int i = 0; i<noffice_count; i++)
					{
					
						if (choice == NF[i].building ||choice  == "nb" && op == NF[i].room_number)
						{
							system("cls");
							cout<<"\noffice : "<<NF[i].room_number;
							cout<<"\nBuilding : "<<NF[i].building;
							cout<<"\nDescription : "<<NF[i].description;
							break;
							
						} else if (choice == OF[i].building ||choice == "ob" && op == OF[i].room_number)
						{
							system("cls");
							cout<<"\nOffice : "<<OF[i].room_number;
							cout<<"\nBuilding : "<<OF[i].building;
							cout<<"\nDescription : "<<OF[i].description;
							break;
						} else { cout<<"\nInvalid Office or Building"; }
					}
					
				} else if (op == 2 )
				{
					system("cls");
					cout<<"\nPlease enter building name: ";
					cin>>choice;
					for(int i = 0; i<noffice_count; i++)
					{
					
						if (choice == NF[i].building || choice == "nb")     
						{
							
							cout<<"\n";
							cout<<"\nOffice : "<<NF[i].room_number;
							cout<<"\nBuilding : "<<NF[i].building;
							cout<<"\nDescription : "<<NF[i].description;
							break;
						}
						else if (choice == OF[i].building || choice == "ob")     
						{
							
							cout<<"\n";
							cout<<"\nOffice : "<<OF[i].room_number;
							cout<<"\nBuilding : "<<OF[i].building;
							cout<<"\nDescription : "<<OF[i].description;
							break;
							
						} else {
							cout<<"\nNo such building found!";
							break;
						}
					}	
							//print all rooms body;
					
				} else 
				{
					system("cls");
					cout<<"\nInvalid Option";
				}
				op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Student_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
							    
								break;
							}
								case 6:
								{	system("cls");
								for (int i = 0; i<Max_sports; i++)
								{
								
								cout<<"\nSports Complex: "<<endl;
								cout<<"\nName: "<<Sports[i].E_Name;
								cout<<"\nDescription: "<<Sports[i].location<<endl;
							}
				    op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Student_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
									break;
								}
									
									case 7:
									{
									    system("cls");
								for (int i = 0; i<Max_parking; i++)
								{
								
								cout<<"\nParking: "<<endl;
								cout<<"\nName: "<<Parking[i].E_Name;
								cout<<"\nDescription: "<<Parking[i].location<<endl;
							}op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Student_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
									break; 
									}
										case 8:
										{	system("cls");
								for (int i = 0; i<Max_Cafe; i++)
								{
								
								cout<<"\nCafe : "<<endl;
								cout<<"\nName: "<<Cafe[i].E_Name;
								cout<<"\nDescription: "<<Cafe[i].location<<endl;
							}
				    op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Student_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
									break;
										}
											case 9:
											{	
											    system("cls");
								for (int i = 0; i<Max_Masjid; i++)
								{
								
								cout<<"\nMasjids: "<<endl;
								cout<<"\nName: "<<Masjid[i].E_Name;
								cout<<"\nDescription: "<<Masjid[i].location<<endl;
							}
				    op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Student_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
									break;
											}
												case 10:
												{	cout<<"\nNotifications: \n--------------------";
													for (int i = 0; i<not_count; i++)
													{
														cout<<"\n| No. "<<i+1<<": "<<n[i].notification_subject<<" |";
														cout<<"\nDate: "<<n[i].notification_date;
														cout<<"\nTime: "<<n[i].notification_time;
														cout<<"\nMessage: "<<n[i].notification_message;
													}
													op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Student_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
												
													break;
												}
												case 11:
													{
														
														for (int i = 0; i <= appointment_count; i++)
														{
															a[i].Book_Appointment();
															}
															op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Student_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
									break;
														}
														
													
													
													default:
													{
														goto login;
													}

		}	
	} 
	//Admin Section
	else if( op == 2)
	{
		system("cls");
		
		cout<<"\nEnter Username: ";
		cin>>name;
		cout<<"\nEnter Password: ";
		cin>>password;
		
		if (name == l.getname() && password == l.getpass() )
		{
			Admin_Menu:    // Label for admin menu
			system("cls");
			Admin_interface();
			op = option();
				
					switch (op)
		{
		case 1:
			{
				system("cls");
				cout<<"\nChoose Building: ";
				cout<<"\n[1] New Building (NB) [2] Old Building (OB) "<<endl;
				op = option();
				if (op == 1)
				{
				
					cout<<"\nEnter Room Number: ";
					cin>>R[NBRooms].room_number;
					R[NBRooms].building = "NB";
					cout<<"\nEnter Room Description: ";
					cin>>R[NBRooms].description;
					NBRooms++;
					system("cls");
					cout<<"\n Room Added Successfully! ";
					op = goto_menu();
	                            	if(op == 1)
	                            	{
										goto Admin_Menu;
												} else 
												{
														cout<<"\nHave a nice day!";
														return 0;
																}	
				}
					else if ( op == 2 )
					{
					
					cout<<"\nEnter Room Number: ";
					cin>>O[OBRooms].room_number;
					O[OBRooms].building = "OB";
					cout<<"\nEnter Room Description: ";
					cin>>O[OBRooms].description;
					OBRooms++;
					system("cls");
					cout<<"\n Room Added Successfully! ";
					op = goto_menu();
	                            	if(op == 1)
	                            	{
										goto Admin_Menu;
												} else 
												{
														cout<<"\nHave a nice day!";
														return 0;
																}	
					}
			
							break;
			}
				case 2:
				{
					int n = vc_count;
					for (int i = n ; i<=vc_count ; i++)
					{
					system("cls");
					cout<<"\nAdd VC:";
					cout<<"\nName: ";  
					cin.ignore();    
					getline(cin, vc[i].VCname);
					
					cout<<"\nDescription: ";  
					cin.ignore();
					getline(cin, vc[i].VCdescription);
					
					cout<<"\nMeeting time: ";  
					cin.ignore();
					getline(cin,vc[i].VCmeeting_time);
				
					cout<<"\nVC's Room : ";
					cin>>vc[i].room_number;
					cout<<"\nRoom's Description: ";
					cin.ignore();
					getline(cin,vc[i].description);
					
					cout<<"\nAdded succesfully!";
				    }
				    vc_count++;
				    op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Admin_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}							    
					break;
				}
				case 3:
				{
					for(int i = dean_count; i<=dean_count; i++)
					{
					
					system("cls");
					cout<<"\nAdd Dean:";
					cout<<"\nName: ";  
					cin.ignore();
					getline(cin, dean[i].Deanname);
					
					cout<<"\nDescription: ";
					cin.ignore();
					getline(cin, dean[i].Dean_description );
					
					cout<<"\nMeeting time: "; 
					cin.ignore();
					getline(cin, dean[i].Dean_meeting_time);
					
					cout<<"\nEnter Room number: ";
					cin>>dean[i].room_number;
					cout<<"\nRoom Description: ";
					cin.ignore();
					getline(cin, dean[i].description);
					
					cout<<"\nAdded succesfully!";
				    }
				    dean_count++;
				    op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Admin_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}						    
						break;
				}
						case 4:
						{
							for (int i = teacher_count; i<=teacher_count; i++)
							{
							
							system("cls");
								cout<<"\nAdd Teacher:";
							    cout<<"\nName: ";         
								cin.ignore();            
								getline(cin, teach[i].teacher_name );
							    cout<<"\nDescription: ";  
								cin.ignore();            
								getline(cin, teach[i].teacher_description );
							    cout<<"\nMeeting time: "; 
								cin.ignore();            
								getline(cin,teach[i].Teacher_meeting_time );
								cout<<"\nEnter Room Number: ";
								cin>>teach[i].room_number;
								cout<<"\nRoom's Description: ";
								cin.ignore();
								getline(cin, teach[i].description);
								
								cout<<"\nAdded succesfully!";
							}
								teacher_count++;
							op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Admin_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}							
							break;
						}
							case 5:
							{system("cls");
				
				cout<<"\nChoose Building: ";
				cout<<"\n[1] New Building (NB) [2] Old Building (OB) "<<endl;
				op = option();
				if (op == 1)
				{
					cout<<"\nEnter Office Number: ";
					cin>>NF[noffice_count].room_number;
					NF[noffice_count].building = "NB";
					cout<<"\nEnter Office Description: ";
					cin.ignore();
					getline(cin,NF[noffice_count].description);
				
					noffice_count++;
					
					cout<<"\nOffice Added Successfully! ";
				}
					else if ( op == 2 )
					{
					cout<<"\nEnter Office Number: ";
					cin>>OF[foffice_count].room_number;
					OF[foffice_count].building = "OB";
					cout<<"\nEnter Office Description: ";
					cin.ignore();
					getline(cin,OF[foffice_count].description);
					
					foffice_count++;
			
					cout<<"\nOffice Added Successfully! ";
					
					}
						op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Admin_Menu;
									} 
							        	else if(op == 2)
												{   
														system("cls");
														cout<<"\nHave a nice day!";
														break;
												}	
							break;
							}
		case 6:
	{ system("cls");	
	
				if(Max_sports < 5 ){
				
				for (int i = Max_sports; i<=Max_sports ; i++)
					{
					system("cls");
					cout<<"\nAdd Sports Complex:";
					cout<<"\nName: "; 
					cin.ignore();     
					getline(cin, Sports[i].E_Name);
					
					cout<<"\nDescription: ";   
					cin.ignore();
					getline(cin, Sports[i].location);
					
				    }
				    Max_sports++;
				} else 
					{
						cout<<"\nLimit Reached;";
					}
				    op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Admin_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
							break;
						}
					case 7:
					{
					system("cls");	
					
				if(Max_parking < 5 ){
				
				for (int i = Max_parking; i<=Max_parking ; i++)
					{
					system("cls");
					cout<<"\nAdd Parking:";
					cout<<"\nName: ";
					cin.ignore();      
					getline(cin,Parking[i].E_Name);
					
					cout<<"\nDescription: ";   
					cin.ignore();
					getline(cin, Parking[i].location);
					
				    }
				    Max_parking++;
				} else 
					{
						cout<<"\nLimit Reached;";
					}
				    op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Admin_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
						break;
					}
				case 8:
				{
					system("cls");	
					
				if(Max_Cafe < 5 ){
				
				for (int i = Max_Cafe; i<=Max_Cafe ; i++)
					{
					system("cls");
					cout<<"\nAdd Cafe:";
					cout<<"\nName: ";      
					cin>> Cafe[i].E_Name;
					cout<<"\nDescription: "; 
					cin.ignore();  
					getline(cin,Cafe[i].location);
					
				    }
				    Max_Cafe++;
				    op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Admin_Menu;
												} else if (op == 2)
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
				} else 
					{
						cout<<"\nLimit Reached;";
					}
				   		
					break;
				}
			case 9:
			{
				
				if(Max_Masjid <5 ){
				
				for (int i = Max_Masjid; i<=Max_Masjid ; i++)
					{
					system("cls");
					cout<<"\nAdd Masjid:";
					cout<<"\nName: ";      
					cin>>Masjid[i].E_Name;
					cout<<"\nDescription: "; 
					cin.ignore();  
					getline(cin,Masjid[i].location);
					
				    }
				    Max_Masjid++;
				} else 
					{
						cout<<"\nLimit Reached;";
					}
				    op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Admin_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
				break;
			}
			
		case 10:
		{	
			system("cls");
			
	
			for(int i = not_count ; i<=not_count ; i++)
			{
			system("cls");
			cout<<"\nEnter New Notification: ";
			cout<<"\nEnter Date: ";
			cin.ignore();
			getline(cin,n[i].notification_date);
			
			cout<<"\nEnter Time: ";
			cin.ignore();
			getline(cin,n[i].notification_time);
			
			cout<<"\nEnter Subject: ";
			cin.ignore();
			getline(cin,n[i].notification_subject);
			
			cout<<"\nEnter Your Message: ";
			cin.ignore();
			getline(cin, n[i].notification_message);
			
			
				} not_count++;
		
		op = goto_menu();
		if(op == 1)
		{
			goto Admin_Menu;
		} else 
		{
			cout<<"\nHave a nice day!";
			break;
		}
		
			break;
		}
		case 11:
		{
			for(int i = 0; i<=appointment_count; i++)
			{
				a[i].DisplayAppointments();
			}
			op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Admin_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
			break;
		 } 
		 case 12:
		 	{
		 		l.updatePassword();
		 	op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto Admin_Menu;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}	
		 		break;
			 }
	default:
	{
		system("cls");
		cout<<"\nInvalid choice! ";
		goto login;
	}

}	
	}	
}
	  else if(op == 3)
	{
	     	Uni.University_Details();
	     	op = goto_menu();
	                            	if(op == 1 )
	                            	{
										goto login;
												} else 
												{   system("cls");
														cout<<"\nHave a nice day!";
														return 0;
																}		
	} else
		{
			system("cls");
			cout<<"\nInvalid Login Choice";	
		}	
	return 0;

}
