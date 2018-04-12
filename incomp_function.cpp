bool incomp(students s[])
{
	for (int i=0;i<3;i++)
	{
	    if(s[i].time!=0)
		{
	        return true;
	    }
	}
	    return false;
}
