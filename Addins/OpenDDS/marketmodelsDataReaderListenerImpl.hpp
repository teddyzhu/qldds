/*
   Copyright (C) 2013 Mike Kipnis

   This file is part of QLDDS, a free-software/open-source library
   for utilization of QuantLib in the distributed envrionment via DDS.

   QLDDS is free software: you can redistribute it and/or modify it
   under the terms of the QLDDS license.  You should have received a
   copy of the license along with this program; if not, please email
   <dev@qldds.org>. The license is also available online at
   <http://qldds.org/qldds-license/>.

   This program is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
   FOR A PARTICULAR PURPOSE.  See the license for more details.
*/
// This file was generated automatically by qldds_gensrc.py.  If you edit this file
// manually then your changes will be lost the next time gensrc runs.

// This source code file was generated from the following stub:
//      Users/mkipnis/Dev/qldds/gensrc/stubs/stub.opendds.header

#include <qlo/qladdindefines.hpp>
#include <qlo/handle.hpp>
#include <qlo/marketmodels.hpp>
#include <qlo/curvestate.hpp>
#include <qlo/evolutiondescription.hpp>
#include <qlo/correlation.hpp>
#include <qlo/ctsmmcapletcalibration.hpp>
#include <qlo/yieldtermstructures.hpp>
#include <ql/models/marketmodels/models/fwdperiodadapter.hpp>
#include <ql/models/marketmodels/swapforwardmappings.hpp>
#include <ql/models/marketmodels/models/capletcoterminalalphacalibration.hpp>
#include <ql/termstructures/yieldtermstructure.hpp>
#include <qlo/valueobjects/vo_marketmodels.hpp>

#include <qlo/conversions/all.hpp>
#include <oh/property.hpp>

#if defined(_MSC_VER) || defined(_WIN32) 
#include <Addins/Cpp/marketmodels.hpp>
#else
#include <qlo/Addins/Cpp/marketmodels.hpp>
#endif

#include "marketmodelsTypeSupportC.h"

#include <DataReaderListener.hpp>

namespace marketmodels
{
  
  class qlAbcdVolDataReaderListenerImpl
    : public virtual OpenDDS::DCPS::LocalObject<qldds::DataReaderListener< marketmodels::qlAbcdVol, std::string > >
  {
    public:
    
      qlAbcdVolDataReaderListenerImpl( ACE_Mutex& mutex ) : _mutex( mutex ) {}; 
      virtual void on_data_available( DDS::DataReader_ptr reader) throw (CORBA::SystemException);

      ACE_Mutex& get_ACE_Mutex() { return _mutex; };

      virtual void on_requested_deadline_missed ( DDS::DataReader_ptr reader, const DDS::RequestedDeadlineMissedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_requested_incompatible_qos ( DDS::DataReader_ptr reader, const DDS::RequestedIncompatibleQosStatus & status) throw (CORBA::SystemException);
  
      virtual void on_liveliness_changed ( DDS::DataReader_ptr reader, const DDS::LivelinessChangedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_subscription_matched ( DDS::DataReader_ptr reader, const DDS::SubscriptionMatchedStatus & status) throw (CORBA::SystemException);

      virtual void on_sample_rejected( DDS::DataReader_ptr reader, const DDS::SampleRejectedStatus& status) throw (CORBA::SystemException);

      virtual void on_sample_lost( DDS::DataReader_ptr reader, const DDS::SampleLostStatus& status) throw (CORBA::SystemException); 

      virtual void on_reading_start( DDS::DataReader_ptr reader );

      virtual void on_reading_end( DDS::DataReader_ptr reader, int count );

      virtual bool pre_quantlib_addin_call( DDS::DataReader_ptr reader, DDS::SampleInfo&, marketmodels::qlAbcdVol& );

      virtual bool post_quantlib_addin_call( DDS::DataReader_ptr reader, marketmodels::qlAbcdVol&, std::string& );

      virtual void on_std_exception( DDS::DataReader_ptr reader, marketmodels::qlAbcdVol&, std::exception& e );

      virtual void on_dds_reading_error( DDS::DataReader_ptr reader, std::string& err );

      virtual void on_dds_exception( DDS::DataReader_ptr reader, CORBA::Exception& exp );

    protected:
      ACE_Mutex& _mutex;

  };

  
  class qlCotSwapToFwdAdapterDataReaderListenerImpl
    : public virtual OpenDDS::DCPS::LocalObject<qldds::DataReaderListener< marketmodels::qlCotSwapToFwdAdapter, std::string > >
  {
    public:
    
      qlCotSwapToFwdAdapterDataReaderListenerImpl( ACE_Mutex& mutex ) : _mutex( mutex ) {}; 
      virtual void on_data_available( DDS::DataReader_ptr reader) throw (CORBA::SystemException);

      ACE_Mutex& get_ACE_Mutex() { return _mutex; };

      virtual void on_requested_deadline_missed ( DDS::DataReader_ptr reader, const DDS::RequestedDeadlineMissedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_requested_incompatible_qos ( DDS::DataReader_ptr reader, const DDS::RequestedIncompatibleQosStatus & status) throw (CORBA::SystemException);
  
      virtual void on_liveliness_changed ( DDS::DataReader_ptr reader, const DDS::LivelinessChangedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_subscription_matched ( DDS::DataReader_ptr reader, const DDS::SubscriptionMatchedStatus & status) throw (CORBA::SystemException);

      virtual void on_sample_rejected( DDS::DataReader_ptr reader, const DDS::SampleRejectedStatus& status) throw (CORBA::SystemException);

      virtual void on_sample_lost( DDS::DataReader_ptr reader, const DDS::SampleLostStatus& status) throw (CORBA::SystemException); 

      virtual void on_reading_start( DDS::DataReader_ptr reader );

      virtual void on_reading_end( DDS::DataReader_ptr reader, int count );

      virtual bool pre_quantlib_addin_call( DDS::DataReader_ptr reader, DDS::SampleInfo&, marketmodels::qlCotSwapToFwdAdapter& );

      virtual bool post_quantlib_addin_call( DDS::DataReader_ptr reader, marketmodels::qlCotSwapToFwdAdapter&, std::string& );

      virtual void on_std_exception( DDS::DataReader_ptr reader, marketmodels::qlCotSwapToFwdAdapter&, std::exception& e );

      virtual void on_dds_reading_error( DDS::DataReader_ptr reader, std::string& err );

      virtual void on_dds_exception( DDS::DataReader_ptr reader, CORBA::Exception& exp );

    protected:
      ACE_Mutex& _mutex;

  };

  
  class qlFlatVolDataReaderListenerImpl
    : public virtual OpenDDS::DCPS::LocalObject<qldds::DataReaderListener< marketmodels::qlFlatVol, std::string > >
  {
    public:
    
      qlFlatVolDataReaderListenerImpl( ACE_Mutex& mutex ) : _mutex( mutex ) {}; 
      virtual void on_data_available( DDS::DataReader_ptr reader) throw (CORBA::SystemException);

      ACE_Mutex& get_ACE_Mutex() { return _mutex; };

      virtual void on_requested_deadline_missed ( DDS::DataReader_ptr reader, const DDS::RequestedDeadlineMissedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_requested_incompatible_qos ( DDS::DataReader_ptr reader, const DDS::RequestedIncompatibleQosStatus & status) throw (CORBA::SystemException);
  
      virtual void on_liveliness_changed ( DDS::DataReader_ptr reader, const DDS::LivelinessChangedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_subscription_matched ( DDS::DataReader_ptr reader, const DDS::SubscriptionMatchedStatus & status) throw (CORBA::SystemException);

      virtual void on_sample_rejected( DDS::DataReader_ptr reader, const DDS::SampleRejectedStatus& status) throw (CORBA::SystemException);

      virtual void on_sample_lost( DDS::DataReader_ptr reader, const DDS::SampleLostStatus& status) throw (CORBA::SystemException); 

      virtual void on_reading_start( DDS::DataReader_ptr reader );

      virtual void on_reading_end( DDS::DataReader_ptr reader, int count );

      virtual bool pre_quantlib_addin_call( DDS::DataReader_ptr reader, DDS::SampleInfo&, marketmodels::qlFlatVol& );

      virtual bool post_quantlib_addin_call( DDS::DataReader_ptr reader, marketmodels::qlFlatVol&, std::string& );

      virtual void on_std_exception( DDS::DataReader_ptr reader, marketmodels::qlFlatVol&, std::exception& e );

      virtual void on_dds_reading_error( DDS::DataReader_ptr reader, std::string& err );

      virtual void on_dds_exception( DDS::DataReader_ptr reader, CORBA::Exception& exp );

    protected:
      ACE_Mutex& _mutex;

  };

  
  class qlFlatVolFactoryDataReaderListenerImpl
    : public virtual OpenDDS::DCPS::LocalObject<qldds::DataReaderListener< marketmodels::qlFlatVolFactory, std::string > >
  {
    public:
    
      qlFlatVolFactoryDataReaderListenerImpl( ACE_Mutex& mutex ) : _mutex( mutex ) {}; 
      virtual void on_data_available( DDS::DataReader_ptr reader) throw (CORBA::SystemException);

      ACE_Mutex& get_ACE_Mutex() { return _mutex; };

      virtual void on_requested_deadline_missed ( DDS::DataReader_ptr reader, const DDS::RequestedDeadlineMissedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_requested_incompatible_qos ( DDS::DataReader_ptr reader, const DDS::RequestedIncompatibleQosStatus & status) throw (CORBA::SystemException);
  
      virtual void on_liveliness_changed ( DDS::DataReader_ptr reader, const DDS::LivelinessChangedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_subscription_matched ( DDS::DataReader_ptr reader, const DDS::SubscriptionMatchedStatus & status) throw (CORBA::SystemException);

      virtual void on_sample_rejected( DDS::DataReader_ptr reader, const DDS::SampleRejectedStatus& status) throw (CORBA::SystemException);

      virtual void on_sample_lost( DDS::DataReader_ptr reader, const DDS::SampleLostStatus& status) throw (CORBA::SystemException); 

      virtual void on_reading_start( DDS::DataReader_ptr reader );

      virtual void on_reading_end( DDS::DataReader_ptr reader, int count );

      virtual bool pre_quantlib_addin_call( DDS::DataReader_ptr reader, DDS::SampleInfo&, marketmodels::qlFlatVolFactory& );

      virtual bool post_quantlib_addin_call( DDS::DataReader_ptr reader, marketmodels::qlFlatVolFactory&, std::string& );

      virtual void on_std_exception( DDS::DataReader_ptr reader, marketmodels::qlFlatVolFactory&, std::exception& e );

      virtual void on_dds_reading_error( DDS::DataReader_ptr reader, std::string& err );

      virtual void on_dds_exception( DDS::DataReader_ptr reader, CORBA::Exception& exp );

    protected:
      ACE_Mutex& _mutex;

  };

  
  class qlFwdPeriodAdapterDataReaderListenerImpl
    : public virtual OpenDDS::DCPS::LocalObject<qldds::DataReaderListener< marketmodels::qlFwdPeriodAdapter, std::string > >
  {
    public:
    
      qlFwdPeriodAdapterDataReaderListenerImpl( ACE_Mutex& mutex ) : _mutex( mutex ) {}; 
      virtual void on_data_available( DDS::DataReader_ptr reader) throw (CORBA::SystemException);

      ACE_Mutex& get_ACE_Mutex() { return _mutex; };

      virtual void on_requested_deadline_missed ( DDS::DataReader_ptr reader, const DDS::RequestedDeadlineMissedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_requested_incompatible_qos ( DDS::DataReader_ptr reader, const DDS::RequestedIncompatibleQosStatus & status) throw (CORBA::SystemException);
  
      virtual void on_liveliness_changed ( DDS::DataReader_ptr reader, const DDS::LivelinessChangedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_subscription_matched ( DDS::DataReader_ptr reader, const DDS::SubscriptionMatchedStatus & status) throw (CORBA::SystemException);

      virtual void on_sample_rejected( DDS::DataReader_ptr reader, const DDS::SampleRejectedStatus& status) throw (CORBA::SystemException);

      virtual void on_sample_lost( DDS::DataReader_ptr reader, const DDS::SampleLostStatus& status) throw (CORBA::SystemException); 

      virtual void on_reading_start( DDS::DataReader_ptr reader );

      virtual void on_reading_end( DDS::DataReader_ptr reader, int count );

      virtual bool pre_quantlib_addin_call( DDS::DataReader_ptr reader, DDS::SampleInfo&, marketmodels::qlFwdPeriodAdapter& );

      virtual bool post_quantlib_addin_call( DDS::DataReader_ptr reader, marketmodels::qlFwdPeriodAdapter&, std::string& );

      virtual void on_std_exception( DDS::DataReader_ptr reader, marketmodels::qlFwdPeriodAdapter&, std::exception& e );

      virtual void on_dds_reading_error( DDS::DataReader_ptr reader, std::string& err );

      virtual void on_dds_exception( DDS::DataReader_ptr reader, CORBA::Exception& exp );

    protected:
      ACE_Mutex& _mutex;

  };

  
  class qlFwdToCotSwapAdapterDataReaderListenerImpl
    : public virtual OpenDDS::DCPS::LocalObject<qldds::DataReaderListener< marketmodels::qlFwdToCotSwapAdapter, std::string > >
  {
    public:
    
      qlFwdToCotSwapAdapterDataReaderListenerImpl( ACE_Mutex& mutex ) : _mutex( mutex ) {}; 
      virtual void on_data_available( DDS::DataReader_ptr reader) throw (CORBA::SystemException);

      ACE_Mutex& get_ACE_Mutex() { return _mutex; };

      virtual void on_requested_deadline_missed ( DDS::DataReader_ptr reader, const DDS::RequestedDeadlineMissedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_requested_incompatible_qos ( DDS::DataReader_ptr reader, const DDS::RequestedIncompatibleQosStatus & status) throw (CORBA::SystemException);
  
      virtual void on_liveliness_changed ( DDS::DataReader_ptr reader, const DDS::LivelinessChangedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_subscription_matched ( DDS::DataReader_ptr reader, const DDS::SubscriptionMatchedStatus & status) throw (CORBA::SystemException);

      virtual void on_sample_rejected( DDS::DataReader_ptr reader, const DDS::SampleRejectedStatus& status) throw (CORBA::SystemException);

      virtual void on_sample_lost( DDS::DataReader_ptr reader, const DDS::SampleLostStatus& status) throw (CORBA::SystemException); 

      virtual void on_reading_start( DDS::DataReader_ptr reader );

      virtual void on_reading_end( DDS::DataReader_ptr reader, int count );

      virtual bool pre_quantlib_addin_call( DDS::DataReader_ptr reader, DDS::SampleInfo&, marketmodels::qlFwdToCotSwapAdapter& );

      virtual bool post_quantlib_addin_call( DDS::DataReader_ptr reader, marketmodels::qlFwdToCotSwapAdapter&, std::string& );

      virtual void on_std_exception( DDS::DataReader_ptr reader, marketmodels::qlFwdToCotSwapAdapter&, std::exception& e );

      virtual void on_dds_reading_error( DDS::DataReader_ptr reader, std::string& err );

      virtual void on_dds_exception( DDS::DataReader_ptr reader, CORBA::Exception& exp );

    protected:
      ACE_Mutex& _mutex;

  };

  
  class qlPseudoRootFacadeDataReaderListenerImpl
    : public virtual OpenDDS::DCPS::LocalObject<qldds::DataReaderListener< marketmodels::qlPseudoRootFacade, std::string > >
  {
    public:
    
      qlPseudoRootFacadeDataReaderListenerImpl( ACE_Mutex& mutex ) : _mutex( mutex ) {}; 
      virtual void on_data_available( DDS::DataReader_ptr reader) throw (CORBA::SystemException);

      ACE_Mutex& get_ACE_Mutex() { return _mutex; };

      virtual void on_requested_deadline_missed ( DDS::DataReader_ptr reader, const DDS::RequestedDeadlineMissedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_requested_incompatible_qos ( DDS::DataReader_ptr reader, const DDS::RequestedIncompatibleQosStatus & status) throw (CORBA::SystemException);
  
      virtual void on_liveliness_changed ( DDS::DataReader_ptr reader, const DDS::LivelinessChangedStatus & status) throw (CORBA::SystemException);
    
      virtual void on_subscription_matched ( DDS::DataReader_ptr reader, const DDS::SubscriptionMatchedStatus & status) throw (CORBA::SystemException);

      virtual void on_sample_rejected( DDS::DataReader_ptr reader, const DDS::SampleRejectedStatus& status) throw (CORBA::SystemException);

      virtual void on_sample_lost( DDS::DataReader_ptr reader, const DDS::SampleLostStatus& status) throw (CORBA::SystemException); 

      virtual void on_reading_start( DDS::DataReader_ptr reader );

      virtual void on_reading_end( DDS::DataReader_ptr reader, int count );

      virtual bool pre_quantlib_addin_call( DDS::DataReader_ptr reader, DDS::SampleInfo&, marketmodels::qlPseudoRootFacade& );

      virtual bool post_quantlib_addin_call( DDS::DataReader_ptr reader, marketmodels::qlPseudoRootFacade&, std::string& );

      virtual void on_std_exception( DDS::DataReader_ptr reader, marketmodels::qlPseudoRootFacade&, std::exception& e );

      virtual void on_dds_reading_error( DDS::DataReader_ptr reader, std::string& err );

      virtual void on_dds_exception( DDS::DataReader_ptr reader, CORBA::Exception& exp );

    protected:
      ACE_Mutex& _mutex;

  };

;
}
