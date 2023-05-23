using NodaTime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cours_mvvm1.MVVM.Model
{
    internal class PageModel
    {
        public int CustomerCount { get; set; }
        public string ProductStatus { get; set; }
        public LocalDate OrderDate { get; set; }
        public decimal TransactionValue { get; set; }
        public TimeSpan ShipmenDelivery { get; set; }
        public bool LocationStatus { get; set; }
    }
}
