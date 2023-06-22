package observer.btvn1;

import java.util.ArrayList;
import java.util.List;

public class UserB implements News.I_News{
	
	News n;
	List<String> listNews = new ArrayList<String>();
	
	public UserB(News n) {
		this.n = n;
		n.attach(this);
	}
	
	public void huyDangKy() {
		n.detach(this);
	}

	@Override
	public void updateNews(String news) {
		
		listNews.add(listNews.size(), news);
		int temp =1;
		
		System.out.println("User B");
		
		for (String s : listNews) {
			System.out.println("Tin tuc " + temp + ": " +s);
			temp++;
		}
		System.out.println("------------------------------");
	}

}