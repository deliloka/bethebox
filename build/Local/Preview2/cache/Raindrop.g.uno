public partial class Raindrop: Fuse.Controls.Panel
{
    outsideTheBox_FuseControlsImage_float4_Color_Property temp_Color_inst;
    static Raindrop()
    {
    }
    public Raindrop()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.Image();
        temp_Color_inst = new outsideTheBox_FuseControlsImage_float4_Color_Property(temp);
        var temp1 = new Fuse.Reactive.DataBinding<float4>(temp_Color_inst, "dropletcolor");
        temp.Width = 30f;
        temp.Height = 30f;
        temp.Padding = float4(5f, 5f, 5f, 5f);
        temp.Opacity = 0.8f;
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../Assets/raindrop.png"));
        temp.Behaviors.Add(temp1);
        this.Children.Add(temp);
    }
}
