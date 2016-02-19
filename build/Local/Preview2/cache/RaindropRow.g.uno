public partial class RaindropRow: Fuse.Controls.Grid
{
    internal Raindrop drop1;
    internal Raindrop drop2;
    internal Raindrop drop3;
    internal Raindrop drop4;
    static RaindropRow()
    {
    }
    public RaindropRow()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        drop1 = new Raindrop();
        drop2 = new Raindrop();
        drop3 = new Raindrop();
        drop4 = new Raindrop();
        this.ColumnCount = 4;
        drop1.Name = "drop1";
        drop2.Name = "drop2";
        drop3.Name = "drop3";
        drop4.Name = "drop4";
        this.Children.Add(drop1);
        this.Children.Add(drop2);
        this.Children.Add(drop3);
        this.Children.Add(drop4);
    }
}
