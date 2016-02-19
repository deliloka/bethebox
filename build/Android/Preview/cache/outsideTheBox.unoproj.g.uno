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
sealed class outsideTheBox_FuseElementsElement_FuseElementsVisibility_Visibility_Property: Uno.UX.Property<Fuse.Elements.Visibility>
{
    Fuse.Elements.Element _obj;
    public outsideTheBox_FuseElementsElement_FuseElementsVisibility_Visibility_Property(Fuse.Elements.Element obj) { _obj = obj;  }
    protected override Fuse.Elements.Visibility OnGet() { return _obj.Visibility; }
    protected override void OnSet(Fuse.Elements.Visibility v, object origin) { _obj.Visibility = v; }
}
sealed class outsideTheBox_FuseControlsImage_float4_Color_Property: Uno.UX.Property<float4>
{
    Fuse.Controls.Image _obj;
    public outsideTheBox_FuseControlsImage_float4_Color_Property(Fuse.Controls.Image obj) { _obj = obj;  }
    protected override float4 OnGet() { return _obj.Color; }
    protected override void OnSet(float4 v, object origin) { _obj.Color = v; }
}
sealed class outsideTheBox_FuseElementsElement_float_Opacity_Property: Uno.UX.Property<float>
{
    Fuse.Elements.Element _obj;
    public outsideTheBox_FuseElementsElement_float_Opacity_Property(Fuse.Elements.Element obj) { _obj = obj;  }
    protected override float OnGet() { return _obj.Opacity; }
    protected override void OnSet(float v, object origin) { _obj.Opacity = v; }
}
sealed class outsideTheBox_FuseTranslation_float_Y_Property: Uno.UX.Property<float>
{
    Fuse.Translation _obj;
    public outsideTheBox_FuseTranslation_float_Y_Property(Fuse.Translation obj) { _obj = obj;  }
    protected override float OnGet() { return _obj.Y; }
    protected override void OnSet(float v, object origin) { _obj.Y = v; }
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