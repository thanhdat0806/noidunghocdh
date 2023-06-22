package observer.btvn1;
import java.util.ArrayList;
import java.util.List;

public class News {
	List<I_News> observers = new ArrayList<I_News>();
	
	public void attach(I_News o) {
		if (!observers.contains(o))
			observers.add(o);;
	}
	
	public void detach(I_News o) {
		if (observers.contains(o))
			observers.remove(o);
	}
	
	public void notifyNews(String news) {
		for (I_News o : observers) {
			o.updateNews(news);
		}
	}
	
	static interface I_News {
		void updateNews(String news);
	}
	
}