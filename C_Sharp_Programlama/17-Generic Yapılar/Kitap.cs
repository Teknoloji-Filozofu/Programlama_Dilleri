﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Generic_Yapılar
{
    public class Kitap:IData
    {
        public int Id { get; set; }
        public string Adi { get; set; }
        public string Barkodu { get; set; }
        public string Yazari { get; set; }
        public int SayfaSayisi { get; set; }
    }
}
