public partial class SunWithCloud: Fuse.Controls.Panel
{
    outsideTheBox_FuseTranslation_float_X_Property cloudImage_X_inst;
    internal Fuse.Translation cloudImage;
    static SunWithCloud()
    {
    }
    public SunWithCloud()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        cloudImage = new Fuse.Translation();
        cloudImage_X_inst = new outsideTheBox_FuseTranslation_float_X_Property(cloudImage);
        var temp = new Fuse.Controls.Image();
        var temp1 = new Fuse.Effects.DropShadow();
        var temp2 = new Sun();
        var temp3 = new Fuse.Triggers.WhileTrue();
        var temp4 = new Fuse.Animations.Cycle<float>(cloudImage_X_inst);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Margin = float4(0f, 50f, 0f, 50f);
        global::Fuse.Controls.Grid.SetRow(temp, 1);
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../Assets/cloud.png"));
        temp.Effects.Add(temp1);
        temp.Transforms.Add(cloudImage);
        temp1.Size = 50f;
        temp3.Value = true;
        temp3.Animators.Add(temp4);
        temp4.Low = -100f;
        temp4.High = 100f;
        temp4.Frequency = 0.2;
        temp4.Waveform = Fuse.Animations.CycleWaveform.Sine;
        this.Children.Add(temp);
        this.Children.Add(temp2);
        this.Behaviors.Add(temp3);
    }
}
