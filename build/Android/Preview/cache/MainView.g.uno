public partial class MainView: Fuse.App
{
    outsideTheBox_FuseControlsTextControl_string_Value_Property locationNameText_Value_inst;
    outsideTheBox_FuseControlsImage_string_Url_Property temp_Url_inst;
    outsideTheBox_FuseElementsElement_FuseElementsVisibility_Visibility_Property temp1_Visibility_inst;
    outsideTheBox_FuseControlsTextControl_string_Value_Property textInputSearch_Value_inst;
    internal Fuse.Controls.Text locationNameText;
    internal Fuse.Controls.TextInput textInputSearch;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Reactive.EventBinding temp_eb1;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        locationNameText = new Fuse.Controls.Text();
        locationNameText_Value_inst = new outsideTheBox_FuseControlsTextControl_string_Value_Property(locationNameText);
        var temp = new Fuse.Controls.Image();
        temp_Url_inst = new outsideTheBox_FuseControlsImage_string_Url_Property(temp);
        var temp1 = new CloudWithRain();
        temp1_Visibility_inst = new outsideTheBox_FuseElementsElement_FuseElementsVisibility_Visibility_Property(temp1);
        textInputSearch = new Fuse.Controls.TextInput();
        textInputSearch_Value_inst = new outsideTheBox_FuseControlsTextControl_string_Value_Property(textInputSearch);
        var temp2 = new Fuse.Reactive.JavaScript();
        var temp3 = new Fuse.Controls.DockPanel();
        var temp4 = new Fuse.Controls.Grid();
        var temp5 = new Fuse.Effects.DropShadow();
        var temp6 = new Fuse.Reactive.DataBinding<string>(locationNameText_Value_inst, "locationName");
        var temp7 = new Fuse.Effects.Blur();
        var temp8 = new Fuse.Reactive.DataBinding<string>(temp_Url_inst, "locationImageUrl");
        var temp9 = new Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>(temp1_Visibility_inst, "visibility");
        var temp10 = new Sun();
        var temp11 = new SunWithCloud();
        var temp12 = new Fuse.Controls.Panel();
        var temp13 = new Fuse.Reactive.DataBinding<string>(textInputSearch_Value_inst, "searchString");
        temp_eb0 = new Fuse.Reactive.EventBinding("searchString");
        var temp14 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("searchClick");
        this.Background = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp2.LineNumber = 2;
        temp2.FileName = "/Users/n07101/dev/fuseProjects/outsideTheBox/MainView.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../MainView.js"));
        temp3.Children.Add(temp4);
        temp4.Rows = "3*, 2*, 1*, 1*";
        temp4.ColumnCount = 1;
        temp4.Children.Add(locationNameText);
        temp4.Children.Add(temp);
        temp4.Children.Add(temp1);
        temp4.Children.Add(temp10);
        temp4.Children.Add(temp11);
        temp4.Children.Add(temp12);
        temp4.Children.Add(temp14);
        locationNameText.TextWrapping = Fuse.Elements.TextWrapping.Wrap;
        locationNameText.FontSize = 48f;
        locationNameText.TextAlignment = Fuse.Elements.TextAlignment.Center;
        locationNameText.TextColor = float4(1f, 1f, 1f, 1f);
        locationNameText.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        locationNameText.Name = "locationNameText";
        global::Fuse.Controls.Grid.SetRow(locationNameText, 0);
        locationNameText.Effects.Add(temp5);
        locationNameText.Behaviors.Add(temp6);
        temp.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        temp.Effects.Add(temp7);
        temp.Behaviors.Add(temp8);
        temp7.Radius = 2f;
        global::Fuse.Controls.Grid.SetRow(temp1, 1);
        temp1.Behaviors.Add(temp9);
        temp10.Visibility = Fuse.Elements.Visibility.Hidden;
        global::Fuse.Controls.Grid.SetRow(temp10, 1);
        temp11.Visibility = Fuse.Elements.Visibility.Visible;
        global::Fuse.Controls.Grid.SetRow(temp11, 1);
        global::Fuse.Controls.Grid.SetRow(temp12, 2);
        temp12.Children.Add(textInputSearch);
        textInputSearch.CaretColor = float4(0f, 0f, 0f, 1f);
        textInputSearch.PlaceholderText = "Søk på sted...";
        textInputSearch.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        textInputSearch.FontSize = 22f;
        textInputSearch.TextColor = float4(0f, 0f, 0f, 1f);
        textInputSearch.Alignment = Fuse.Elements.Alignment.Bottom;
        textInputSearch.Name = "textInputSearch";
        textInputSearch.ValueChanged += temp_eb0.OnEvent;
        textInputSearch.Behaviors.Add(temp13);
        textInputSearch.Behaviors.Add(temp_eb0);
        temp14.Text = "Søk";
        temp14.Margin = float4(20f, 20f, 20f, 20f);
        global::Fuse.Controls.Grid.SetRow(temp14, 3);
        global::Fuse.Gestures.Clicked.AddHandler(temp14, temp_eb1.OnEvent);
        temp14.Behaviors.Add(temp_eb1);
        this.RootNode = temp3;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.Behaviors.Add(temp2);
    }
}
