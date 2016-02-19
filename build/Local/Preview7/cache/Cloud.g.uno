public partial class Cloud: Fuse.Controls.Panel
{
    static Cloud()
    {
    }
    public Cloud()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.Image();
        var temp1 = new Fuse.Effects.DropShadow();
        temp.Color = float4(0.4235294f, 0.4156863f, 0.4705882f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.BundleFile("../../../../Assets/cloud.png"));
        temp.Effects.Add(temp1);
        temp1.Size = 5f;
        temp1.Distance = 10f;
        this.Children.Add(temp);
    }
}
