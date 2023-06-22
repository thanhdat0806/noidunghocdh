package observer.btvn1;


public class UserA implements News.I_News{
	News n;
	
	public UserA(News n) {
		this.n = n;
		n.attach(this);
	}
	
	public void huyDangKy() {
		n.detach(this);
	}

	@Override
	public void updateNews(String news) {
		
		System.out.println("User A");
		System.out.println("Tin moi nhat: " + news);
		System.out.println("------------------------------");
	}

}