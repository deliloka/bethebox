public partial class CloudWithRain: Fuse.Controls.Grid
{
    outsideTheBox_FuseElementsElement_float_Opacity_Property raindropRow3_Opacity_inst;
    outsideTheBox_FuseElementsElement_float_Opacity_Property raindropRow4_Opacity_inst;
    internal RaindropRow raindropRow1;
    internal RaindropRow raindropRow2;
    internal RaindropRow raindropRow3;
    internal RaindropRow raindropRow4;
    static CloudWithRain()
    {
    }
    public CloudWithRain()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        raindropRow3 = new RaindropRow();
        raindropRow3_Opacity_inst = new outsideTheBox_FuseElementsElement_float_Opacity_Property(raindropRow3);
        raindropRow4 = new RaindropRow();
        raindropRow4_Opacity_inst = new outsideTheBox_FuseElementsElement_float_Opacity_Property(raindropRow4);
        var temp = new Cloud();
        raindropRow1 = new RaindropRow();
        raindropRow2 = new RaindropRow();
        var temp1 = new Fuse.Triggers.WhileTrue();
        var temp2 = new Fuse.Animations.Cycle<float>(raindropRow3_Opacity_inst);
        var temp3 = new Fuse.Animations.Cycle<float>(raindropRow4_Opacity_inst);
        this.Rows = "4*,1*,1*,1*";
        this.ColumnCount = 1;
        this.Width = 500f;
        this.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        this.Margin = float4(10f, 10f, 10f, 10f);
        global::Fuse.Controls.Grid.SetRow(this, 1);
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        raindropRow1.Width = 100f;
        raindropRow1.Alignment = Fuse.Elements.Alignment.Bottom;
        raindropRow1.Name = "raindropRow1";
        global::Fuse.Controls.Grid.SetRow(raindropRow1, 0);
        raindropRow2.Width = 100f;
        raindropRow2.Margin = float4(10f, 0f, 0f, 0f);
        raindropRow2.Name = "raindropRow2";
        global::Fuse.Controls.Grid.SetRow(raindropRow2, 1);
        raindropRow3.Width = 100f;
        raindropRow3.Margin = float4(20f, 0f, 0f, 0f);
        raindropRow3.Name = "raindropRow3";
        global::Fuse.Controls.Grid.SetRow(raindropRow3, 2);
        raindropRow4.Width = 100f;
        raindropRow4.Margin = float4(30f, 0f, 0f, 0f);
        raindropRow4.Name = "raindropRow4";
        global::Fuse.Controls.Grid.SetRow(raindropRow4, 3);
        temp1.Value = true;
        temp1.Animators.Add(temp2);
        temp1.Animators.Add(temp3);
        temp2.Low = 1f;
        temp2.High = 0.5f;
        temp2.Frequency = 1;
        temp2.Waveform = Fuse.Animations.CycleWaveform.Sawtooth;
        temp3.Low = 0.5f;
        temp3.High = 0f;
        temp3.Frequency = 1;
        temp3.Waveform = Fuse.Animations.CycleWaveform.Sawtooth;
        this.Children.Add(temp);
        this.Children.Add(raindropRow1);
        this.Children.Add(raindropRow2);
        this.Children.Add(raindropRow3);
        this.Children.Add(raindropRow4);
        this.Behaviors.Add(temp1);
    }
}
