public partial class ResultView: Fuse.Controls.Grid
{
    outsideTheBox_FuseControlsTextControl_string_Value_Property locationNameText_Value_inst;
    outsideTheBox_FuseControlsImage_string_Url_Property temp_Url_inst;
    outsideTheBox_FuseElementsElement_FuseElementsVisibility_Visibility_Property temp1_Visibility_inst;
    outsideTheBox_FuseElementsElement_FuseElementsVisibility_Visibility_Property temp2_Visibility_inst;
    outsideTheBox_FuseElementsElement_FuseElementsVisibility_Visibility_Property temp3_Visibility_inst;
    outsideTheBox_FuseControlsTextControl_string_Value_Property textInputSearch_Value_inst;
    internal Fuse.Controls.Text locationNameText;
    internal Fuse.Controls.TextInput textInputSearch;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Reactive.EventBinding temp_eb1;
    static ResultView()
    {
    }
    public ResultView()
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
        var temp2 = new Sun();
        temp2_Visibility_inst = new outsideTheBox_FuseElementsElement_FuseElementsVisibility_Visibility_Property(temp2);
        var temp3 = new SunWithCloud();
        temp3_Visibility_inst = new outsideTheBox_FuseElementsElement_FuseElementsVisibility_Visibility_Property(temp3);
        textInputSearch = new Fuse.Controls.TextInput();
        textInputSearch_Value_inst = new outsideTheBox_FuseControlsTextControl_string_Value_Property(textInputSearch);
        var temp4 = new Fuse.Effects.DropShadow();
        var temp5 = new Fuse.Reactive.DataBinding<string>(locationNameText_Value_inst, "locationName");
        var temp6 = new Fuse.Effects.Blur();
        var temp7 = new Fuse.Reactive.DataBinding<string>(temp_Url_inst, "locationImageUrl");
        var temp8 = new Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>(temp1_Visibility_inst, "cloudwithrainVisibility");
        var temp9 = new Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>(temp2_Visibility_inst, "sunVisibility");
        var temp10 = new Fuse.Reactive.DataBinding<Fuse.Elements.Visibility>(temp3_Visibility_inst, "sunwithcloudVisibility");
        var temp11 = new Fuse.Controls.Panel();
        var temp12 = new Fuse.Reactive.DataBinding<string>(textInputSearch_Value_inst, "searchString");
        temp_eb0 = new Fuse.Reactive.EventBinding("searchString");
        var temp13 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("searchClick");
        this.Rows = "3*, 2*, 1*, 1*";
        this.ColumnCount = 1;
        locationNameText.TextWrapping = Fuse.Elements.TextWrapping.Wrap;
        locationNameText.FontSize = 48f;
        locationNameText.TextAlignment = Fuse.Elements.TextAlignment.Center;
        locationNameText.TextColor = float4(1f, 1f, 1f, 1f);
        locationNameText.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        locationNameText.Name = "locationNameText";
        global::Fuse.Controls.Grid.SetRow(locationNameText, 0);
        locationNameText.Effects.Add(temp4);
        locationNameText.Behaviors.Add(temp5);
        temp.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        temp.Effects.Add(temp6);
        temp.Behaviors.Add(temp7);
        temp6.Radius = 2f;
        global::Fuse.Controls.Grid.SetRow(temp1, 1);
        temp1.Behaviors.Add(temp8);
        global::Fuse.Controls.Grid.SetRow(temp2, 1);
        temp2.Behaviors.Add(temp9);
        global::Fuse.Controls.Grid.SetRow(temp3, 1);
        temp3.Behaviors.Add(temp10);
        global::Fuse.Controls.Grid.SetRow(temp11, 2);
        temp11.Children.Add(textInputSearch);
        textInputSearch.CaretColor = float4(0f, 0f, 0f, 1f);
        textInputSearch.PlaceholderText = "Søk på sted...";
        textInputSearch.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        textInputSearch.FontSize = 22f;
        textInputSearch.TextColor = float4(0f, 0f, 0f, 1f);
        textInputSearch.Alignment = Fuse.Elements.Alignment.Bottom;
        textInputSearch.Name = "textInputSearch";
        textInputSearch.ValueChanged += temp_eb0.OnEvent;
        textInputSearch.Behaviors.Add(temp12);
        textInputSearch.Behaviors.Add(temp_eb0);
        temp13.Text = "Søk";
        temp13.Margin = float4(20f, 20f, 20f, 20f);
        global::Fuse.Controls.Grid.SetRow(temp13, 3);
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb1.OnEvent);
        temp13.Behaviors.Add(temp_eb1);
        this.Children.Add(locationNameText);
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
        this.Children.Add(temp11);
        this.Children.Add(temp13);
    }
}
