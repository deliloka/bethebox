public partial class MainView: Fuse.App
{
    outsideTheBox_FuseControlsTextControl_string_Value_Property temp_Value_inst;
    outsideTheBox_FuseControlsImage_string_Url_Property temp1_Url_inst;
    outsideTheBox_FuseControlsImage_UnoUXFileSource_File_Property sunImage_File_inst;
    outsideTheBox_FuseControlsTextControl_string_Value_Property temp2_Value_inst;
    outsideTheBox_FuseTranslation_float_X_Property cloudImage_X_inst;
    outsideTheBox_FuseScaling_float_Factor_Property sunScaling_Factor_inst;
    internal Fuse.Translation cloudImage;
    internal Fuse.Controls.Image sunImage;
    internal Fuse.Translation sunImage1;
    internal Fuse.Scaling sunScaling;
    internal Fuse.Reactive.EventBinding temp_eb0;
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new outsideTheBox_FuseControlsTextControl_string_Value_Property(temp);
        var temp1 = new Fuse.Controls.Image();
        temp1_Url_inst = new outsideTheBox_FuseControlsImage_string_Url_Property(temp1);
        sunImage = new Fuse.Controls.Image();
        sunImage_File_inst = new outsideTheBox_FuseControlsImage_UnoUXFileSource_File_Property(sunImage);
        var temp2 = new Fuse.Controls.TextInput();
        temp2_Value_inst = new outsideTheBox_FuseControlsTextControl_string_Value_Property(temp2);
        cloudImage = new Fuse.Translation();
        cloudImage_X_inst = new outsideTheBox_FuseTranslation_float_X_Property(cloudImage);
        sunScaling = new Fuse.Scaling();
        sunScaling_Factor_inst = new outsideTheBox_FuseScaling_float_Factor_Property(sunScaling);
        var temp3 = new Fuse.Reactive.JavaScript();
        var temp4 = new Fuse.Controls.DockPanel();
        var temp5 = new Fuse.Controls.Grid();
        var temp6 = new Fuse.Effects.DropShadow();
        var temp7 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "locationName");
        var temp8 = new Fuse.Effects.Blur();
        var temp9 = new Fuse.Reactive.DataBinding<string>(temp1_Url_inst, "locationImageUrl");
        var temp10 = new Fuse.Controls.Image();
        var temp11 = new Fuse.Effects.DropShadow();
        sunImage1 = new Fuse.Translation();
        var temp12 = new Fuse.Reactive.DataBinding<Uno.UX.FileSource>(sunImage_File_inst, "weatherIconBehind");
        var temp13 = new Fuse.Controls.Panel();
        var temp14 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "locationName");
        temp_eb0 = new Fuse.Reactive.EventBinding("locationName");
        var temp15 = new Fuse.Controls.Button();
        var temp16 = new Fuse.Triggers.WhileTrue();
        var temp17 = new Fuse.Animations.Cycle<float>(cloudImage_X_inst);
        var temp18 = new Fuse.Animations.Spin();
        var temp19 = new Fuse.Animations.Cycle<float>(sunScaling_Factor_inst);
        this.Background = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp3.Code = "console.log(\"asdasdasd\");\n\t \tvar Observable = require(\"FuseJS/Observable\");\n\t \tvar locationName=Observable(\"\");    \n        module.exports = {\n            locationName: locationName,\n            weatherIconBehind : \"Assets/sun.png\",\n            locationImageUrl: \"https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSRpbFs7aeVYvtiQDisVajg_yC8R-2N-rboxVxJXmy4sDdKch9fvQ\"\n            \n        };";
        temp3.LineNumber = 2;
        temp3.FileName = "/Users/n07101/dev/fuseProjects/outsideTheBox/MainView.ux";
        temp4.Children.Add(temp5);
        temp4.Behaviors.Add(temp16);
        temp5.Rows = "3*, 2*, 1*, 1*";
        temp5.ColumnCount = 1;
        temp5.Children.Add(temp);
        temp5.Children.Add(temp1);
        temp5.Children.Add(temp10);
        temp5.Children.Add(sunImage);
        temp5.Children.Add(temp13);
        temp5.Children.Add(temp15);
        temp.TextWrapping = Fuse.Elements.TextWrapping.Wrap;
        temp.FontSize = 48f;
        temp.TextAlignment = Fuse.Elements.TextAlignment.Center;
        temp.TextColor = float4(1f, 1f, 1f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        temp.Effects.Add(temp6);
        temp.Behaviors.Add(temp7);
        temp1.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        global::Fuse.Controls.Grid.SetRow(temp1, 0);
        temp1.Effects.Add(temp8);
        temp1.Behaviors.Add(temp9);
        temp8.Radius = 2f;
        temp10.Alignment = Fuse.Elements.Alignment.Center;
        temp10.Margin = float4(0f, 50f, 0f, 50f);
        global::Fuse.Controls.Grid.SetRow(temp10, 1);
        temp10.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../Assets/cloud.png"));
        temp10.Effects.Add(temp11);
        temp10.Transforms.Add(cloudImage);
        temp11.Size = 50f;
        sunImage.Color = float4(1f, 0.8352941f, 0.04705882f, 1f);
        sunImage.Alignment = Fuse.Elements.Alignment.Center;
        sunImage.Margin = float4(0f, 25f, 0f, 25f);
        sunImage.Name = "sunImage";
        global::Fuse.Controls.Grid.SetRow(sunImage, 1);
        sunImage.Behaviors.Add(temp12);
        sunImage.Transforms.Add(sunImage1);
        sunImage.Transforms.Add(sunScaling);
        sunScaling.Factor = 1f;
        global::Fuse.Controls.Grid.SetRow(temp13, 2);
        temp13.Children.Add(temp2);
        temp2.CaretColor = float4(0f, 0f, 0f, 1f);
        temp2.PlaceholderText = "Søk på sted";
        temp2.PlaceholderColor = float4(0f, 0f, 0f, 1f);
        temp2.FontSize = 36f;
        temp2.TextColor = float4(1f, 1f, 1f, 1f);
        temp2.ValueChanged += temp_eb0.OnEvent;
        temp2.Behaviors.Add(temp14);
        temp2.Behaviors.Add(temp_eb0);
        temp15.Text = "Søk";
        temp15.Margin = float4(20f, 20f, 20f, 20f);
        global::Fuse.Controls.Grid.SetRow(temp15, 3);
        temp16.Value = true;
        temp16.Animators.Add(temp17);
        temp16.Animators.Add(temp18);
        temp16.Animators.Add(temp19);
        temp17.Low = -100f;
        temp17.High = 100f;
        temp17.Frequency = 0.2;
        temp17.Waveform = Fuse.Animations.CycleWaveform.Sine;
        temp18.Frequency = 0.05;
        temp18.Target = sunImage;
        temp19.Low = 1f;
        temp19.High = 1.05f;
        temp19.Frequency = 1.5;
        this.RootNode = temp4;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.Behaviors.Add(temp3);
    }
}
