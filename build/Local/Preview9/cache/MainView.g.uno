public partial class MainView: Fuse.App
{
    internal Fuse.Controls.PageControl pages;
    internal Fuse.Controls.Page page1;
    internal Fuse.Controls.Page page2;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Reactive.JavaScript();
        var temp1 = new Fuse.Controls.DockPanel();
        pages = new Fuse.Controls.PageControl();
        page1 = new Fuse.Controls.Page();
        var temp2 = new SearchView();
        page2 = new Fuse.Controls.Page();
        var temp3 = new ResultView();
        this.Background = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp.LineNumber = 2;
        temp.FileName = "/Users/n07101/dev/fuseProjects/outsideTheBox/MainView.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../MainView.js"));
        temp1.Children.Add(pages);
        pages.Name = "pages";
        pages.Children.Add(page1);
        pages.Children.Add(page2);
        page1.Name = "page1";
        page1.Children.Add(temp2);
        page2.Name = "page2";
        page2.Children.Add(temp3);
        this.RootNode = temp1;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.Behaviors.Add(temp);
    }
}
