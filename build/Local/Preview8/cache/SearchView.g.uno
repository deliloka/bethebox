public partial class SearchView: Fuse.Controls.Panel
{
    outsideTheBox_FuseControlsTextControl_string_Value_Property textInputSearch_Value_inst;
    internal Fuse.Controls.TextInput textInputSearch;
    internal Fuse.Reactive.EventBinding temp_eb2;
    static SearchView()
    {
    }
    public SearchView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        textInputSearch = new Fuse.Controls.TextInput();
        textInputSearch_Value_inst = new outsideTheBox_FuseControlsTextControl_string_Value_Property(textInputSearch);
        var temp = new Fuse.Reactive.JavaScript();
        var temp1 = new Fuse.Controls.Panel();
        var temp2 = new Fuse.Reactive.DataBinding<string>(textInputSearch_Value_inst, "searchString");
        temp_eb2 = new Fuse.Reactive.EventBinding("searchString");
        temp.LineNumber = 2;
        temp.FileName = "/Users/n07101/dev/fuseProjects/outsideTheBox/SearchView.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../Search.js"));
        temp1.Children.Add(textInputSearch);
        textInputSearch.CaretColor = float4(0f, 0f, 0f, 1f);
        textInputSearch.PlaceholderText = "Søk på sted...";
        textInputSearch.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        textInputSearch.FontSize = 22f;
        textInputSearch.TextColor = float4(0f, 0f, 0f, 1f);
        textInputSearch.Alignment = Fuse.Elements.Alignment.Bottom;
        textInputSearch.Name = "textInputSearch";
        textInputSearch.ValueChanged += temp_eb2.OnEvent;
        textInputSearch.Behaviors.Add(temp2);
        textInputSearch.Behaviors.Add(temp_eb2);
        this.Children.Add(temp1);
        this.Behaviors.Add(temp);
    }
}
