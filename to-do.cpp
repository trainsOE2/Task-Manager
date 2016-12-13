#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, num, i=0, j, x ;
	char ch1 = 'y', change = 'y', ch2, ch3;
	int ctr=0, id[20], input ;
	std::string label[20], status[20], stat ;
	

do	
{
	   	   
	 MENU :  {
				std::cout << "\n\n\tMENU\n" ;
		        std::cout << "\n1. Create a task\n2. List all tasks\n3. Mark all tasks (done/pending)\n4. Mark particular task(s) (done/pending))\n5. Exit";
		        std::cout << "\n\nEnter choice : ";
		        std::cin >> num;
		        ch1 = 'y' ;
		        change = 'y' ;
		     }

	
    switch (num)
	{
			
	   case 1 :
	       {     
				 while( ch1 == 'y')   
				   { 
		             std::cout << "\nLabel task "<<i+1<<" as : ";
		             std::cin >> label[i];
		             status[i] = "unmarked" ;
		             id[i] = ++ctr;
		
		             i++;
		             
		             std::cout << "\n" ;
		            
		             std::cout << "\nAdd more tasks ? (y/n) : " ;
		             std::cin >> ch1 ;
		             
		             std::cout << "\n" ;
		          }

		            goto MENU ;
		   }
		   break ;

    
    
        case 2 :
		   {
			    std::cout << "\n\nAll your tasks are listed below\n";
                std::cout << "\n\tID\tTASK\tSTATUS\n";
                for ( x=0 ; x<i ; x++)
                {
    	            std::cout << "\n\t" << id[x] << "\t" << label[x] << "\t" << status[x];
	            }
	             
	            goto MENU ;
	       }
	       break ;
    
    
	    case 3 :
	    	{
	            std::cout << "\nEnter '1' if task completed else '0' ";
	
	            for ( x=0 ; x<i ; x++)
                {
    	            std::cout << "\n\t" << id[x] << "\t" << label[x] << "\t" ;
    	            std::cin >> status[x] ;
	            }
	            
	            for( x=0 ; x<i ; x++)
	            {
	            	if( status[x] == "1")
	            	status[x].assign("done");
	            	
					else if( status[x] == "0")
					status[x].assign("pending");
					
					else
					std::cout << "Invalid input XXX";
				}
				
				goto MENU ;
	    	}
	    	break ;
	    	
	    
		case 4 :
	    	{
	    		while ( change == 'y')
				{
					std::cout << "\n\nAll your tasks are listed below\n";
                    std::cout << "\n\tID\tTASK\tSTATUS\n";
                    for ( x=0 ; x<i ; x++)
                    {
    	                std::cout << "\n\t" << id[x] << "\t" << label[x] << "\t" << status[x];
	                }
	    		
	    		    std::cout << "\nEnter the reqd. id as in the list above : " ;
	    		    std::cin >> input ;
	    		    std::cout << "\nEnter required status (done/pending) : " ;
	    		    std::cin >> stat ;
	    		
	    		    for( x=0 ; x<i ; x++)
	    		    {
	    			    if(input == id[x])
	    			    status[x].assign(stat) ;
				    }
				
				    std::cout <<"\nChange more statuses ? (y/n) : " ;
				    std::cin >> change ;
			    }
			    
			    goto MENU ;
	    		
			}
			break ;
				
	        
	        
	    default : std::cout << "\n Do what you love, Love what you do";
	         break ;
	        
    }
} while(num != 5) ;
    
    return 0 ;
}
