#include<iostream>
#include<stdlib.h>
#include<fstream>
#include "counter.txt"
using namespace std;

int random ();
int random()
{
	string str = {"Lorem amet consectetur adipisicing elit. Culpa quo eaque magni perferendis esse deserunt itaque quos, impedit quam. Tempore iusto dolores molestiae rem necessitatibus, beatae laboriosam officia atque voluptatum repellendus veniam ullam corrupti similique, optio cum pariatur velit voluptatem inventore, provident id consectetur odit deleniti? Ratione eius nam quasi repellat corporis necessitatibus accusamus illo voluptatibus dolor enim? Ratione, voluptate fugiat asperiores odit quibusdam tempora quis numquam deserunt, ut vel molestiae incidunt accusantium assumenda officiis perferendis minus aut cum provident enim fugit? Doloribus iusto aperiam necessitatibus blanditiis amet, nam veniam repellendus sit dolor, deleniti magnam reprehenderit et, officiis autem eum error. Molestiae maxime, nihil cumque laborum, quod deserunt vitae et porro tempora ipsum aspernatur reiciendis? Officia quisquam maiores velit sapiente quod. Vel iste placeat ad mollitia at eveniet minima accusantium dolores porro eos adipisci expedita, sit odio saepe quis, in atque similique. Beatae nisi aut ullam mollitia tenetur odit ab nulla, perferendis voluptatem sapiente debitis sunt libero explicabo odio hic laboriosam modi rerum consequuntur vitae repellendus ut in maiores repellat quo! Amet facere optio, natus sapiente aliquam iure doloribus dignissimos provident alias perferendis at mollitia explicabo voluptatibus voluptates saepe architecto unde qui beatae. Iure esse quas praesentium dignissimos? Repellat, omnis cupiditate. Excepturi laboriosam iure incidunt, voluptatem, animi id dolorum possimus nostrum ea, atque corrupti harum sapiente exercitationem quaerat dolor minus quae similique soluta tempore eligendi nesciunt praesentium laudantium quo earum? Autem adipisci accusamus consequatur ipsam quae illum ut voluptates ullam, assumenda nam possimus! Ea doloremque enim unde obcaecati voluptas exercitationem dolore, voluptatibus eligendi dolores inventore sed et odio. Beatae, ducimus provident autem aspernatur sit maxime aliquid. Nesciunt deserunt dolore enim explicabo? A recusandae exercitationem cum aspernatur maiores error dolorem quos facere, est expedita eius. Harum, sint vero deleniti ea provident sapiente autem explicabo blanditiis inventore architecto animi nihil esse velit enim, laborum ex voluptatem dolorem ducimus fuga! Dolores, aliquid rerum neque a odio, vero quam ad enim obcaecati laudantium, commodi temporibus quis repellat placeat dolore asperiores quia suscipit molestiae perferendis voluptate explicabo praesentium perspiciatis doloremque magnam. Dolorum delectus odio recusandae voluptates magni nesciunt tempora nisi possimus, corrupti, rem blanditiis aspernatur maxime nemo excepturi voluptatem! Eveniet veniam quia numquam modi eligendi aspernatur quisquam nisi. Odit fugiat molestiae pariatur sit quasi dolor odio tempora corporis quos non expedita soluta voluptas repellendus perspiciatis adipisci illum autem explicabo suscipit aut, et rem unde. Voluptatibus mollitia laudantium ipsum adipisci autem fugit similique pariatur minus distinctio sit vero dicta facere, dolor magnam, dolorum voluptas magni, commodi rerum! Distinctio illum ducimus blanditiis unde nulla amet maiores est dolore eos repellendus non quos rem, sunt eius excepturi reiciendis tempore repellat quidem alias similique expedita, vero enim quisquam maxime? Eius sit nam quod quibusdam dolore aspernatur ipsa, voluptas quam deleniti quisquam accusamus ad molestiae quaerat quasi? Laborum labore, dolorem doloribus nesciunt corporis quae quos similique nostrum modi. Ipsa enim non consequuntur voluptates quasi rerum? Aspernatur eos sit beatae architecto, in nemo amet laudantium modi voluptatibus impedit. Facere placeat eligendi, possimus eius sed, maxime asperiores ipsum veritatis quisquam ea rerum accusantium quasi eveniet perspiciatis hic odio. Neque voluptatibus eum suscipit ducimus quisquam cumque, excepturi quasi vero deleniti doloremque facere tempore. Doloremque voluptatibus perspiciatis officia, soluta harum laboriosam praesentium sint minima labore quisquam accusantium modi ipsum inventore laborum sunt asperiores magnam sed necessitatibus totam aspernatur eligendi? Nemo laboriosam rem eos suscipit, reiciendis omnis aliquid a totam tenetur veritatis eius optio modi quidem. Minima nobis blanditiis dignissimos commodi incidunt."};
	i++;
	if(str[i]=='\0')
	{
		i = 0;
	}
	
	return (str[i]%10);
}

int main()
{
	ofstream outputFile("test3.txt");
	int ch;
	int temp;
	string game[] = {"Rock","Paper","Scissor","Rock","Scissor","Paper","Rock","Scissor","Paper","Rock"};
	while(1)
	{
		printf("%c",201);
		for(int i=0;i<22;i++)
		{
			printf("%c",205);
		}
		printf("%c",187);
		
		cout<<endl;
		printf("%c",186);
		printf("\t1.Rock ");
		printf("        ");
		printf("%c",186);
		
		cout<<endl;
		printf("%c",186);
		printf("\t2.Paper ");
		printf("       ");
		printf("%c",186);
		
		cout<<endl;
		printf("%c",186);
		printf("\t3.Scissor ");
		printf("     ");
		printf("%c",186);
		
		cout<<endl;
		printf("%c",186);
		printf("\t4.Exit ");
		printf("        ");
		printf("%c",186);
		
		
		
		cout<<endl;
		printf("%c",186);
		printf("                      ");
		printf("%c",186);
		cout<<endl;
		printf("%c",200);
		for(int i=0;i<22;i++)
		{
			printf("%c",205);
		}
		printf("%c",188);
		cout<<endl;
		cout<<"Enter the choice: ";
		cin>>ch;
		
		

		switch(ch)
		{
			case 1:temp = random();
			       
				break;
			case 2:temp = random();
			       
				break;
			case 3:temp = random();
			        
				break;
			case 4:
			{
				outputFile << "int i = " << i << ";";
				outputFile.close();
				remove("counter.txt");
				rename("test3.txt","counter.txt");
				exit(0);
			}
			
		}
		
		cout<<endl;
		
		cout << game[temp] << endl;
		
			if(temp == 0 || temp == 3 || temp == 6 || temp == 9) // rock
			{	
				if(ch == 1) //rock
				{
					cout << "\n\tRock vs Rock : ";
					cout << "\n\tTie!!!\n\n";
				}
				if(ch == 2) //paper
				{
						cout << "\n\tPaper vs Rock : ";
						printf("\n\t%c You Won!!!\n\n",1);
				}
				if(ch == 3) //scissor
				{
						cout << "\n\tScissor vs Rock : ";
						cout << "\n\tYou Lost!!!\n\n";
				}
			}
			else if (temp == 1 || temp == 5 || temp == 8) //paper
			{
				if(ch == 1) //rock
				{
					cout << "\n\tRock vs Paper : ";
					cout << "\n\tYou Lost!!!\n\n";
				}
				if(ch == 2) //paper
				{
						cout << "\n\tPaper vs Paper : ";
						cout << "\n\tTie!!!\n\n";
				}
				if(ch == 3) //scissor
				{
						cout << "\n\tScissor vs Paper : ";
						printf("\n\t%c You Won!!!\n\n",1);
				}
			}
			else if(temp == 2 || temp == 4 || temp == 7) //scissor
			{
				if(ch == 1) //rock
				{
					cout << "\n\tRock vs Scissor : ";
					printf("\n\t%c You Won!!!\n\n",1);
					
				}
				if(ch == 2) //paper
				{
						cout << "\n\tPaper vs Scissor : ";
						cout << "\n\tYou Lost!!!\n\n";
				}
				if(ch == 3) //scissor
				{
						cout << "\n\tScissor vs Scissor : ";
						cout << "\n\tTie!!!\n\n";
				}
			}
			else
			{
				cout << "\n\tInvalid Option!\n\n";
			}	
	}
}