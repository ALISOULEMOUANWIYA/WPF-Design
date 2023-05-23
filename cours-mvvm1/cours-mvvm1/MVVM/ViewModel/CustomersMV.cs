using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using cours_mvvm1.MVVM.Model;

namespace cours_mvvm1.MVVM.ViewModel
{
     class CustomersMV: utilities.ViewModelBase
    {
        public readonly PageModel _pageModel;

        public int CustomerID
        {
            get { return _pageModel.CustomerCount;  }
            set {  _pageModel.CustomerCount = value ; OnPropertyChanged(); }
        }

        public CustomersMV()
        {
            _pageModel = new PageModel();
            CustomerID = 100528;
        }
    }
}
