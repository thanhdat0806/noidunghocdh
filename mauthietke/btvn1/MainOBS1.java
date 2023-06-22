package observer.btvn1;

public class MainOBS1 {

	public static void main(String[] args) {
		
		News n = new News();
		UserA userA = new UserA(n);
		UserB userB = new UserB(n);
		
		n.notifyNews("ABC");
		n.notifyNews("ABCD");
		n.notifyNews("ABCDE");
	}

}