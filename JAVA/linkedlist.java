package rtt;

 class Dent {
	int data;
	Dent next;
	Dent(int a)
	{
		data=a;
		next=null;
	}
}
 public class X
{
	void display(Dent temp)
	{
		while(temp!=null)
		{
			System.out.println(temp.data);
			temp=temp.next;
		}
	}
static Dent head,first,second,temp;
public static void main(String args[])
{
	head=new Dent(10);
	first=new Dent(20);
	second=new Dent(30);
	head.next=first;
	first.next=second;
	X c=new X();
	c.display(head);
	
}

}
