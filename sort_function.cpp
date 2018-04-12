void sort(students s[])
{
    for(int i=1;i<3;i++)
	{
        for(int j=0;j<3-i;j++)
		{
            if(s[j].time < s[j+1].time)
			{
                students temp = s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
            else if(s[j].time == s[j+1].time){
	                if(s[j].id > s[j+1].id){
	                    students temp = s[j];
	                    s[j]=s[j+1];
	                    s[j+1]=temp;
	                }
	            }
	        }
	    }
    }

