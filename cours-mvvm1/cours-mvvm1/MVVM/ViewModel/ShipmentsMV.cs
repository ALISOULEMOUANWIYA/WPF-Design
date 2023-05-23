using cours_mvvm1.MVVM.Model;
using NodaTime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cours_mvvm1.MVVM.ViewModel
{
     class ShipmentsMV : utilities.ViewModelBase
    {
        public readonly PageModel _pageModel;

        public TimeSpan ShipmentTracking
        {
            get { return _pageModel.ShipmenDelivery; }
            set { _pageModel.ShipmenDelivery = value; OnPropertyChanged(); }
        }

        public ShipmentsMV()
        {
            _pageModel = new PageModel();
            TimeSpan TodayTime = DateTime.Now.TimeOfDay;
            ShipmentTracking = TodayTime;
        }
    }
}
