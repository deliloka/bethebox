sealed class outsideTheBox_FuseControlsTextControl_string_Value_Property: Uno.UX.Property<string>
{
    Fuse.Controls.TextControl _obj;
    public outsideTheBox_FuseControlsTextControl_string_Value_Property(Fuse.Controls.TextControl obj) { _obj = obj; obj.ValueChanged += this.OnValueChanged; }
    protected override string OnGet() { return _obj.Value; }
    protected override void OnSet(string v, object origin) { _obj.SetValue(v, origin); }
    protected override void OnAddListener(Uno.UX.ValueChangedHandler<string> listener) { _obj.ValueChanged += listener; }
    protected override void OnRemoveListener(Uno.UX.ValueChangedHandler<string> listener) { _obj.ValueChanged -= listener; }
}
sealed class outsideTheBox_FuseControlsImage_string_Url_Property: Uno.UX.Property<string>
{
    Fuse.Controls.Image _obj;
    public outsideTheBox_FuseControlsImage_string_Url_Property(Fuse.Controls.Image obj) { _obj = obj;  }
    protected override string OnGet() { return _obj.Url; }
    protected override void OnSet(string v, object origin) { _obj.Url = v; }
}
sealed class outsideTheBox_FuseControlsImage_float4_Color_Property: Uno.UX.Property<float4>
{
    Fuse.Controls.Image _obj;
    public outsideTheBox_FuseControlsImage_float4_Color_Property(Fuse.Controls.Image obj) { _obj = obj;  }
    protected override float4 OnGet() { return _obj.Color; }
    protected override void OnSet(float4 v, object origin) { _obj.Color = v; }
}
sealed class outsideTheBox_FuseControlsImage_UnoUXFileSource_File_Property: Uno.UX.Property<Uno.UX.FileSource>
{
    Fuse.Controls.Image _obj;
    public outsideTheBox_FuseControlsImage_UnoUXFileSource_File_Property(Fuse.Controls.Image obj) { _obj = obj;  }
    protected override Uno.UX.FileSource OnGet() { return _obj.File; }
    protected override void OnSet(Uno.UX.FileSource v, object origin) { _obj.File = v; }
}
sealed class outsideTheBox_FuseTranslation_float_X_Property: Uno.UX.Property<float>
{
    Fuse.Translation _obj;
    public outsideTheBox_FuseTranslation_float_X_Property(Fuse.Translation obj) { _obj = obj;  }
    protected override float OnGet() { return _obj.X; }
    protected override void OnSet(float v, object origin) { _obj.X = v; }
}
sealed class outsideTheBox_FuseScaling_float_Factor_Property: Uno.UX.Property<float>
{
    Fuse.Scaling _obj;
    public outsideTheBox_FuseScaling_float_Factor_Property(Fuse.Scaling obj) { _obj = obj;  }
    protected override float OnGet() { return _obj.Factor; }
    protected override void OnSet(float v, object origin) { _obj.Factor = v; }
}
