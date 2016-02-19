public partial class Sun: Fuse.Controls.Image
{
    outsideTheBox_FuseScaling_float_Factor_Property sunScaling_Factor_inst;
    internal Fuse.Translation sunImage;
    internal Fuse.Scaling sunScaling;
    static Sun()
    {
    }
    public Sun()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        sunScaling = new Fuse.Scaling();
        sunScaling_Factor_inst = new outsideTheBox_FuseScaling_float_Factor_Property(sunScaling);
        sunImage = new Fuse.Translation();
        var temp = new Fuse.Triggers.WhileTrue();
        var temp1 = new Fuse.Animations.Spin();
        var temp2 = new Fuse.Animations.Cycle<float>(sunScaling_Factor_inst);
        this.Color = float4(1f, 0.8352941f, 0.04705882f, 1f);
        this.Alignment = Fuse.Elements.Alignment.Center;
        this.Margin = float4(0f, 25f, 0f, 25f);
        this.Name = "sunImage";
        global::Fuse.Controls.Grid.SetRow(this, 1);
        sunScaling.Factor = 1f;
        temp.Value = true;
        temp.Animators.Add(temp1);
        temp.Animators.Add(temp2);
        temp1.Frequency = 0.05;
        temp1.Target = this;
        temp2.Low = 1f;
        temp2.High = 1.05f;
        temp2.Frequency = 1.5;
        this.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../Assets/sun.png"));
        this.Behaviors.Add(temp);
        this.Transforms.Add(sunImage);
        this.Transforms.Add(sunScaling);
    }
}
