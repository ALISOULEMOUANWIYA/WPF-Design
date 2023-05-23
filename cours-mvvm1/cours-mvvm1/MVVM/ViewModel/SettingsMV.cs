
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using cours_mvvm1.MVVM.Model;

namespace cours_mvvm1.MVVM.ViewModel
{
     class SettingsMV : utilities.ViewModelBase
    {
        public readonly PageModel _pageModel;

        public bool Settings
        {
            get { return _pageModel.LocationStatus; }
            set { _pageModel.LocationStatus = value; OnPropertyChanged(); }
        }

        public SettingsMV()
        {
            _pageModel = new PageModel();
            Settings = true;
        }
    }
}
