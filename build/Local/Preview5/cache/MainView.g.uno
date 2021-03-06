public partial class MainView: Fuse.App
{
    outsideTheBox_FuseControlsTextControl_string_Value_Property locationNameText_Value_inst;
    outsideTheBox_FuseControlsImage_string_Url_Property temp_Url_inst;
    outsideTheBox_FuseControlsTextControl_string_Value_Property textInputSearch_Value_inst;
    outsideTheBox_FuseTranslation_float_X_Property cloudImage_X_inst;
    outsideTheBox_FuseScaling_float_Factor_Property sunScaling_Factor_inst;
    internal Fuse.Controls.Text locationNameText;
    internal Fuse.Translation cloudImage;
    internal Fuse.Controls.Image sunImage;
    internal Fuse.Translation sunImage1;
    internal Fuse.Scaling sunScaling;
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
        textInputSearch = new Fuse.Controls.TextInput();
        textInputSearch_Value_inst = new outsideTheBox_FuseControlsTextControl_string_Value_Property(textInputSearch);
        cloudImage = new Fuse.Translation();
        cloudImage_X_inst = new outsideTheBox_FuseTranslation_float_X_Property(cloudImage);
        sunScaling = new Fuse.Scaling();
        sunScaling_Factor_inst = new outsideTheBox_FuseScaling_float_Factor_Property(sunScaling);
        var temp1 = new Fuse.Reactive.JavaScript();
        var temp2 = new Fuse.Controls.DockPanel();
        var temp3 = new Fuse.Controls.Grid();
        var temp4 = new Fuse.Effects.DropShadow();
        var temp5 = new Fuse.Reactive.DataBinding<string>(locationNameText_Value_inst, "locationName");
        var temp6 = new Fuse.Effects.Blur();
        var temp7 = new Fuse.Reactive.DataBinding<string>(temp_Url_inst, "locationImageUrl");
        var temp8 = new Fuse.Controls.Image();
        var temp9 = new Fuse.Effects.DropShadow();
        sunImage = new Fuse.Controls.Image();
        sunImage1 = new Fuse.Translation();
        var temp10 = new Fuse.Controls.Panel();
        var temp11 = new Fuse.Reactive.DataBinding<string>(textInputSearch_Value_inst, "searchString");
        temp_eb0 = new Fuse.Reactive.EventBinding("searchString");
        var temp12 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("searchClick");
        var temp13 = new Fuse.Triggers.WhileTrue();
        var temp14 = new Fuse.Animations.Cycle<float>(cloudImage_X_inst);
        var temp15 = new Fuse.Animations.Spin();
        var temp16 = new Fuse.Animations.Cycle<float>(sunScaling_Factor_inst);
        this.Background = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp1.LineNumber = 2;
        temp1.FileName = "/Users/n07101/dev/fuseProjects/outsideTheBox/MainView.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../MainView.js"));
        temp2.Children.Add(temp3);
        temp2.Behaviors.Add(temp13);
        temp3.Rows = "3*, 2*, 1*, 1*";
        temp3.ColumnCount = 1;
        temp3.Children.Add(locationNameText);
        temp3.Children.Add(temp);
        temp3.Children.Add(temp8);
        temp3.Children.Add(sunImage);
        temp3.Children.Add(temp10);
        temp3.Children.Add(temp12);
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
        temp8.Alignment = Fuse.Elements.Alignment.Center;
        temp8.Margin = float4(0f, 50f, 0f, 50f);
        global::Fuse.Controls.Grid.SetRow(temp8, 1);
        temp8.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../Assets/cloud.png"));
        temp8.Effects.Add(temp9);
        temp8.Transforms.Add(cloudImage);
        temp9.Size = 50f;
        sunImage.Color = float4(1f, 0.8352941f, 0.04705882f, 1f);
        sunImage.Alignment = Fuse.Elements.Alignment.Center;
        sunImage.Margin = float4(0f, 25f, 0f, 25f);
        sunImage.Name = "sunImage";
        global::Fuse.Controls.Grid.SetRow(sunImage, 1);
        sunImage.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../Assets/sun.png"));
        sunImage.Transforms.Add(sunImage1);
        sunImage.Transforms.Add(sunScaling);
        sunScaling.Factor = 1f;
        global::Fuse.Controls.Grid.SetRow(temp10, 2);
        temp10.Children.Add(textInputSearch);
        textInputSearch.CaretColor = float4(0f, 0f, 0f, 1f);
        textInputSearch.PlaceholderText = "Søk på sted...";
        textInputSearch.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        textInputSearch.FontSize = 22f;
        textInputSearch.TextColor = float4(0f, 0f, 0f, 1f);
        textInputSearch.Alignment = Fuse.Elements.Alignment.Bottom;
        textInputSearch.Name = "textInputSearch";
        textInputSearch.ValueChanged += temp_eb0.OnEvent;
        textInputSearch.Behaviors.Add(temp11);
        textInputSearch.Behaviors.Add(temp_eb0);
        temp12.Text = "Søk";
        temp12.Margin = float4(20f, 20f, 20f, 20f);
        global::Fuse.Controls.Grid.SetRow(temp12, 3);
        global::Fuse.Gestures.Clicked.AddHandler(temp12, temp_eb1.OnEvent);
        temp12.Behaviors.Add(temp_eb1);
        temp13.Value = true;
        temp13.Animators.Add(temp14);
        temp13.Animators.Add(temp15);
        temp13.Animators.Add(temp16);
        temp14.Low = -100f;
        temp14.High = 100f;
        temp14.Frequency = 0.2;
        temp14.Waveform = Fuse.Animations.CycleWaveform.Sine;
        temp15.Frequency = 0.05;
        temp15.Target = sunImage;
        temp16.Low = 1f;
        temp16.High = 1.05f;
        temp16.Frequency = 1.5;
        this.RootNode = temp2;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.Behaviors.Add(temp1);
    }
}
